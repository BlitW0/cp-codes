#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1e5 + 7;
#define pb push_back

vector <ll> G[MAX];
bool vis[MAX], hap[MAX], chk = 0;

void dfs(ll u, ll par) {
    vis[u] = 1;
    if(par) {
        if(!chk) {
            if(G[u].size() - 1 > G[par].size())
                hap[u] = 1;
            chk = 1;
        } else {
            if(G[u].size() > G[par].size())
                hap[u] = 1;
        }
    }
    for(ll i = 0; i < G[u].size(); i++) {
        ll v = G[u][i];
        if(v != par)
            dfs(v, u);
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, m; cin >> n >> m;
    for(ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        G[a].pb(b), G[b].pb(a);
    }
    ll cnt = 0;
    for(ll i = 1; i <= n; i++) {
        if(!vis[i])
            dfs(i, 0);
        chk = 0;
    }
    for(ll i = 1; i <= n; i++)
        if(hap[i])
            cnt++;
    cout << cnt << '\n';
    return 0;
}