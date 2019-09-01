#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 300007
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>

vector < pll > G[MAX];
map < pll, pll > ind;
map <ll, ll> par, ans;
set < pll > s;

void dijkstra(ll src, ll n) {
    for(ll i = 1; i <= n; i++)
        ans[i] = (i == src) ? 0 : 1e18;
    s.insert(mp(ans[src], src));
    par[src] = 0;
    while(!s.empty()) {
        pair <ll, ll> top = *(s.begin());
        s.erase(s.begin());
        ll u = top.second;
        for(ll i = 0; i < G[u].size(); i++) {
            ll v = G[u][i].first, w = G[u][i].second;
            if(ans[u] + w <= ans[v]) {
                par[v] = u;
                if(ans[v] != 1e18)
                    s.erase(s.find(mp(ans[v], v)));
                ans[v] = ans[u] + w;
                s.insert(mp(ans[v], v));
            }
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, m; cin >> n >> m;
    for(ll i = 1; i <= m; i++) {
        ll a, b, w;
        cin >> a >> b >> w;
        G[a].pb(mp(b, w)), G[b].pb(mp(a, w));
        ind[mp(a, b)] = mp(i, w), ind[mp(b, a)] = mp(i, w);
    }
    ll src; cin >> src;
    dijkstra(src, n);
    vector <ll> out;
    ll tot = 0;
    for(ll i = 1; i <= n; i++) 
        if(i != src) {
            out.pb(ind[mp(i, par[i])].first);
            tot += ind[mp(i, par[i])].second;
        }
    cout << tot << '\n';
    for(ll i = 0; i < out.size(); i++)
        cout << out[i] << ' ';
    cout << '\n';
    return 0;
}