#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define MAX 100007
#define vp vector < pair <ll, ll> >

vp G[MAX];
bool inc[MAX]; set < pair <ll, ll> > s;
map <ll, ll> par, ans;

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

            if(ans[u] + w < ans[v]) {
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
    
    for(ll i = 0; i < m; i++) {
        ll a, b, w;
        cin >> a >> b >> w;

        G[a].pb(mp(b, w));
        G[b].pb(mp(a, w));
    }
    
    dijkstra(1, n);

    if(ans[n] == 1e18) {
        cout << -1 << '\n';
        return 0;
    }

    stack <ll> path;
    ll root = n;
    while(root) {
        path.push(root);
        root = par[root];
    }

    while(!path.empty()) {
        cout << path.top() << ' ';
        path.pop();
    }
    cout << '\n';

    return 0;
}