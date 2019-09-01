#include <bits//stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1e5 + 7;
#define pb push_back

vector <ll> G[MAX], dist (MAX), par (MAX);

void dfs(ll u, ll pr) {
    dist[u] = dist[pr] + 1, par[u] = pr;
    for(ll i = 0; i < G[u].size(); i++)
        if(G[u][i] != pr)
            dfs(G[u][i], u);
}

ll lca(ll u, ll v) {
    ll du = dist[u], dv = dist[v];
    if(du > dv)
        while(du != dv)
            du--, u = par[u];
    else if(dv > du)
        while(dv != du)
            dv--, v = par[v];
    while(u != v)
        v = par[v], u = par[u];
    return u;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t; cin >> t;
    for(ll x = 1; x <= t; x++) {
        ll n; cin >> n;
        for(ll i = 1; i <= n; i++) {
            ll s, ch; cin >> s;
            for(ll j = s; j > 0; j--)
                cin >> ch, G[i].pb(ch), G[ch].pb(i);
        }
        dist[0] = -1, dfs(1, 0);
        ll q; cin >> q;
        cout << "Case " << x << ":\n";
        for(ll i = 0; i < q; i++) {
            ll u, v; cin >> u >> v;
            cout << lca(u, v) << '\n';
        }
        dist.clear(), par.clear();
        for(ll i = 1; i <= n; i++)
            G[i].clear();
    }
    return 0;
}