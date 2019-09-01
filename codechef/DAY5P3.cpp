#include <bits/stdc++.h>
using namespace std;
#define MAX 100007
#define pb push_back
#define mp make_pair
#define vp vector < pair <ll, ll> >
#define pll pair <ll, ll>
typedef long long ll;
const ll INF = 1e17;

vp G[MAX];
set < pll > ans;
priority_queue < pll, vp, greater < pll > > pq;
set <ll> notdone;
map < pll, ll > par;

void prims_heap(ll src, ll n) {
    for (ll i = 1; i <= n; i++)
        notdone.insert(i);
    for (ll i = 0; i < G[src].size(); i++) {
        pll tmp = mp(G[src][i].second, G[src][i].first);
        pq.push(tmp), par[tmp] = src;
    }
    notdone.erase(src);
    while (!notdone.empty()) {
        pll min = pq.top(); pq.pop();
        ll u = min.second;
        if(notdone.find(u) != notdone.end()) {
            ans.insert(mp(min.first, u));
            notdone.erase(u);
        }
        for(ll i = 0; i < G[u].size(); i++)
            if(notdone.find(G[u][i].first) != notdone.end()) {
                pll tmp = mp(G[u][i].second, G[u][i].first);
                pq.push(tmp), par[tmp] = u;
            }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t; cin >> t;
    while(t--) {
        ll n, m; cin >> n >> m;
        for (ll i = 0; i < m; i++) {
            ll u, v, w; cin >> u >> v >> w;
            G[u].pb(mp(v, w));
            G[v].pb(mp(u, w));
        }
        prims_heap(1, n);
        set < pll > :: iterator it;
        for (it = ans.begin(); it != ans.end(); it++) {
            ll x = it->second, y = par[*it];
            cout << min(x, y) << ' ' << max(x, y) << ' ' << it->first << '\n';
        }
        for(ll i = 1; i <= n; i++)
            G[i].clear();
        ans.clear(), par.clear(), notdone.clear();
        while(!pq.empty()) pq.pop();
    }
    return 0;
}