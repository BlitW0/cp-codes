#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 1e5 + 7;
const ll m = 1e9 + 9;

ll mexp( ll x, ll y ) {
    ll res = 1;
    x %= m;
    while( y ) {
        if( y & 1 ) res = ( res * x ) % m;
        x = ( x * x ) % m, y >>= 1;
    }
    return res;
}

ll mod( ll x ) {
    if( x < 0 ) x += m;
    return x % m;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n, a, b, k; cin >> n >> a >> b >> k;
    char sign; ll ans = 0;
    ll r = ( b * mexp( a, m - 2 ) ) % m;
    r = mexp( r, k );
    for( ll i = 0; i < k; ++i ) {
        ll p = ( n - i + 1 ) / k;
        if( ( n - i + 1 ) % k != 0 ) ++p;
        cin >> sign;
        ll x = ( mexp( a, n - i ) * mexp( b, i ) ) % m;
        ll mul = ( ( mexp( r, p ) - 1 ) * mexp( r - 1, m - 2 ) ) % m;
        ll val = ( x * mul ) % m;
        if( r != 1 ) {
            if( sign == '+' ) ans = mod( ans + val );
            else ans = mod( ans - val );
        } else {
            if( sign == '+' ) ans = mod( ans + mod( x * p ) );
            else ans = mod( ans - mod( x * p ) );
        }
    }
    cout << ans << '\n';
    return 0;
}