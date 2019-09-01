#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const ll MAX = 1e5 + 7;

vector <ll> G[MAX], euler;
ll dist[MAX], pos[MAX], tree[2 * MAX];

void dfs(ll u, ll p) {
    dist[u] = dist[p] + 1;
    euler.pb(u), pos[u] = euler.size() - 1;
    for(ll i = 0; i < G[u].size(); i++)
        if(G[u][i] != p)
            dfs(G[u][i], u);
}

void build(ll n) {
    for(ll i = 1; i <= n; i++)
        tree[n + i - 1] = dist[i];
    for(ll i = n - 1; i >= 0; i--)
        tree[i] = min(tree[i << 1], tree[i << 1 | 1]);
}

ll query(ll l, ll r, ll n) {
    ll ans = 1e18;
    for(l += n - 1, r += n - 1; l < r; l >>= 1, r >>= 1) {
        if(l & 1) ans = min(ans, tree[l++]);
        if(r & 1) ans = min(ans, tree[--r]);
    }
    return ans;
}

int main() {
    ll n; cin >> n;
    for(ll i = 0; i < n - 1; i++) {
        ll u, v; cin >> u >> v;
        G[u].pb(v), G[v].pb(u);
    }
    dist[0] = -1, dfs(1, 0);
    build(n);
    ll q; cin >> q;
    while(q--) {
        ll u, v; cin >> u >> v;
        cout << query(min(pos[u], pos[v]) + 1, max(pos[u], pos[v]) + 1, n) << '\n';
    }
    return 0;
}