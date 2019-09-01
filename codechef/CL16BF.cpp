#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
#define pb push_back
#define MAX 100007

vector <ll> G[MAX];
bool vis[MAX];
ll ans[MAX];

void dfs(ll u) {
    vis[u] = 1;
    for(ll i = 0; i < G[u].size(); i++) {
        ll v = G[u][i];
        if(!vis[v]) dfs(v);
        ans[u] = (ans[u] + ans[v]) % mod;
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, m; cin >> n >> m;
    ll p, q; cin >> p >> q;
    for(ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        G[a].pb(b);
    }
    ans[q] = 1;
    dfs(p);
    cout << ans[p] << '\n';
    return 0;
}