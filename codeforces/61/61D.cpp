#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAX = 1e5 + 7;

vector < pll > G[MAX];
ll dist[MAX];

void dfs(ll u, ll par) {
    for(auto x : G[u])
        if(x.second != par) {
            dist[x.second] = dist[u] + x.first;
            dfs(x.second, u);
        }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    ll n, total = 0; cin >> n;
    for(ll i = 0; i < n - 1; i++) {
        ll u, v, w; cin >> u >> v >> w;
        G[u].pb(mp(w, v)), G[v].pb(mp(w, u));
        total += w;
    }
    dfs(1, 0);
    cout << 2*total - *max_element(dist + 1, dist + n + 1) << '\n';
    return 0;
}