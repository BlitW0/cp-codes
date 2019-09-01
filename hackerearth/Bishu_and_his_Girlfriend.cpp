#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const ll MAX = 1e5 + 7;

vector <ll> G[MAX];
ll dist[MAX];

void dfs(ll u, ll par) {
    dist[u] = dist[par] + 1;
    for(ll i = 0; i < G[u].size(); i++) {
        ll v = G[u][i];
        if(v != par)
            dfs(v, u);
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n; cin >> n;
    for(ll i = 0; i < n - 1; i++) {
        ll a, b; cin >> a >> b;
        G[a].pb(b), G[b].pb(a);
    }
    dist[0] = -1, dfs(1, 0);
    ll q, ans = 1e18, ansid, buf; cin >> q;
    while(q--) {
        cin >> buf;
        if(dist[buf] < ans) ans = dist[buf], ansid = buf;
        else if(dist[buf] == ans) ansid = min(buf, ansid);
    }
    cout << ansid << '\n';
    return 0;
}