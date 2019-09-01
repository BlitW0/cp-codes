#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long ll;
const ll MAX = 1e5 + 7;

vector <ll> G[MAX];
bool vis[MAX];

void dfs(ll u) {
    if(!vis[u]) {
        vis[u] = 1;
        for(ll i = 0; i < G[u].size(); i++)
            dfs(G[u][i]);
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, m; cin >> n >> m;
    pair <ll, ll> cost[MAX];
    ll u, v;
    for(ll i = 1; i <= n; i++)
        cin >> u, cost[i] = mp(u, i);
    for(ll i = 0; i < m; i++)
        cin >> u >> v, G[u].pb(v), G[v].pb(u);
    ll ans = 0;
    sort(cost + 1, cost + n + 1);
    for(ll i = 1; i <= n; i++)
        if(!vis[cost[i].second])
            dfs(cost[i].second), ans += cost[i].first;
    cout << ans << '\n';
    return 0;
}