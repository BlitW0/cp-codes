#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 3 * ( 1e4 ) + 7, MOD = 1e9 + 7;

vector < ll > g[MAXN];
bool vis[MAXN];

void dfs( ll u ) {
    vis[u] = 1;
    for( auto x : g[u] )
        if( !vis[x] )
            dfs( x );
    cout << u << ' ';
} 

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n, m; cin >> n >> m;
    for( ll i = 0; i < m; ++i ) {
        ll u, v; cin >> u >> v;
        g[u].pb( v );
    }
    for( ll i = 1; i <= n; ++i )
        if( !vis[i] )
            dfs( i );
    cout << '\n';
    return 0;
}