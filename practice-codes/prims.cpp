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
map <ll, ll> ans;
priority_queue < pll, vp, greater < pll > > pq;
set <ll> notdone;

void prims_heap(ll src, ll n) {
    for (ll i = 1; i <= n; i++)
        ans[i] = INF, notdone.insert(i);
    for (ll i = 0; i < G[src].size(); i++)
        pq.push(mp(G[src][i].second, G[src][i].first));
    ans[src] = 0, notdone.erase(src);
    while (!notdone.empty()) {
        pll min = pq.top(); pq.pop();
        
        ll u = min.second;
        if(notdone.find(u) != notdone.end()) {
            ans[u] = min.first;
            notdone.erase(u);
        }
        
        // ans[u] = min.first;
        for(ll i = 0; i < G[u].size(); i++)
            if(notdone.find(G[u][i].first) != notdone.end())
                pq.push(mp(G[u][i].second, G[u][i].first));
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, m; cin >> n >> m;
    for (ll i = 0; i < m; i++) {
        ll u, v, w; cin >> u >> v >> w;
        G[u].pb(mp(v, w));
        G[v].pb(mp(u, w));
    }
    prims_heap(1, n);
    ll tot = 0;
    for(ll i = 1; i <= n; i++)
        tot += ans[i];
    cout << tot << '\n';
    return 0;
}