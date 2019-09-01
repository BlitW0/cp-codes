#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 2*(1e5) + 7;

vector < pll > g[MAXN];
priority_queue < pll, vector < pll >, greater < pll > > pq;
ll a[MAXN], d[MAXN];
bool done[MAXN];

void dijkstra( ll n ) {
    for( ll i = 1; i <= n; i++ )
        d[i] = a[i];
    while( !pq.empty() ) {
        pll min = pq.top(); pq.pop();
        if( done[min.second] )
            continue;
        ll u = min.second;
        d[u] = min.first, done[u] = 1;
        for( ll i = 0; i < (ll) g[u].size(); ++i ) {
            ll v = g[u][i].first, w = g[u][i].second;
            if( d[u] + 2 * w < d[v] )
                d[v] = d[u] + 2 * w, pq.push( mp( d[v], v ) );
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n, m; cin >> n >> m;
    for( ll i = 0; i < m; i++ ) {
        ll u, v, w; cin >> u >> v >> w;
        g[u].pb( mp( v, w ) ), g[v].pb( mp( u, w ) );
    }
    for( ll i = 1; i <= n; i++ )
        cin >> a[i], pq.push( mp( a[i], i ) );
    dijkstra( n );
    for( ll i = 1; i <= n; i++ )
        cout << d[i] << ' ';
    cout << '\n';
    return 0;
}