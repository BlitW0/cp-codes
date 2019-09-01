#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const ll MAX = 1007;

vector <ll> G[MAX];
bool vis[MAX], mat[MAX][MAX];

void bfs(ll src, ll *dist, ll n) {
    memset(vis, 0, sizeof(vis));
    queue <ll> q;
    dist[src] = 0, q.push(src), vis[src] = 1;
    while(!q.empty()) {
        ll f = q.front();
        for(ll i = 0; i < G[f].size(); i++) {
            ll v = G[f][i];
            if(!vis[v])
                q.push(v), dist[v] = dist[f] + 1, vis[v] = 1; 
        }
        q.pop();
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    ll n, m, s, t;
    cin >> n >> m >> s >> t;
    for(ll i = 0; i < m; i++) {
        ll u, v; cin >> u >> v;
        G[u].pb(v), G[v].pb(u);
        mat[u][v] = 1, mat[v][u] = 1;
    }
    ll ds[MAX], dt[MAX], cnt = 0;
    bfs(s, ds, n), bfs(t, dt, n);
    for(ll i = 1; i <= n; i++) {
        for(ll j = i + 1; j <= n; j++) {
            if(!mat[i][j])
                if(ds[i] + dt[j] + 1 >= ds[t] && dt[i] + ds[j] + 1 >= ds[t])
                    cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}