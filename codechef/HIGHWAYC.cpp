#include <bits/stdc++.h>
using namespace std;
typedef double ld;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t; cin >> t;
    while(t--) {
        ll n; ld s, y;
        cin >> n >> s >> y;
        ld v[17], c[17], p[17]; ll d[17];
        for(ll i = 0; i < n; i++) cin >> v[i];
        for(ll i = 0; i < n; i++) cin >> d[i];
        for(ll i = 0; i < n; i++) cin >> p[i];
        for(ll i = 0; i < n; i++) cin >> c[i];

        ld ans = 0;
        for(ll i = 0; i < n; i++) {
            ld del;
            if( d[i] ) {
                ld curback = ( p[i] - c[i] ) + ( v[i]*ans );
                if( curback > 0 )
                    del = 0;
                else {
                    ld ff = curback + c[i] + ( v[i]*( y/s ) );
                    ld fb = ff - c[i];
                    if( ff < 0 )
                        del = 0;
                    else {
                        del = ( pow(10, -6) - curback ) / v[i];
                    }
                }
            } else {
                ld curback = ( p[i] + c[i] ) - ( v[i]*ans );
                if( curback < 0 )
                    del = 0;
                else {
                    ld ff = curback - c[i] - ( v[i]*( y/s ) );
                    ld fb = ff + c[i];
                    if( ff > 0 )
                        del = 0;
                    else {
                        del = ( curback + pow(10, -6) ) / v[i];
                    }
                }
            }
            ans += del + y/s;
        }
        printf("%.6lf\n", ans);
    }
    return 0;
}