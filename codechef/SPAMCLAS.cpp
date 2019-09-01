#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t; cin >> t;
    while ( t-- ) {
        ll n, minx, maxx;
        cin >> n >> minx >> maxx;
        ll even = 0, odd = 0;
        ll w[n + 1], b[n + 1];
        for ( ll i = 0; i < n; i++ ) {
            cin >> w[i] >> b[i];
            ( w[i] % 2 == 0 ) ? even++ : odd++;
        }
        ll fi = 0, chance = 0;
        if ( odd == n ) chance = 1;
        for ( ll i = 0; i < n - 1; i++ ) {
            ( w[i] % 2 == 0 ) ? even-- : odd--;
            if ( b[i] % 2 != 0 )
                if ( odd == n - i - 1 )
                    fi++;
            fi %= 2;
        }
        fi += b[n - 1] % 2; fi %= 2;
        ll ans[2] = {0}, tot = maxx - minx + 1;
        if ( tot % 2 == 0 ) ans[0] = ans[1] = tot / 2;
        else ans[minx % 2] = tot / 2 + 1, ans[( minx + 1 ) % 2] = tot / 2;
        if ( fi ) {
            if ( chance ) cout << ans[1] << ' ' << ans[0];
            else cout << "0 " << tot;
        } else {
            if ( chance ) cout << ans[0] << ' ' << ans[1];
            else cout << tot << " 0";
        }
        cout << '\n';
    }
    return 0;
}