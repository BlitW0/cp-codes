#include <bits/stdc++.h>
using namespace std;
typedef double ld;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 1e5 + 7;
const ll mod = 1e9 + 7;

int main() {
    // ios_base :: sync_with_stdio(false);
    // cin.tie(0), cout.tie(0);
    ll t; cin >> t;
    while( t != 0 ) {
        ll n = ( 1 << t ) - 1;
        ll v[n + 1]; ld p[n + 1];
        for( ll i = 1; i <= n; ++i )
            cin >> v[i], p[i] = v[i];
        for( ll i = n >> 1; i > 0; --i ) {
            ll l = 2 * i, r = 2 * i + 1;
            if( p[r] > p[l] ) v[i] *= v[r], p[i] *= p[r];
            else v[i] *= v[l], p[i] *= p[l];
            v[i] %= mod;
        }
        cout << v[1] << '\n';
        cin >> t;
    }
    return 0;
}