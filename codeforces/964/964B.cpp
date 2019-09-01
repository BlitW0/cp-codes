#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 1e5 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n, a, b, c, t;
    cin >> n >> a >> b >> c >> t;
    ll ans = n * a, st[1007] = {0}, buf;
    for( ll i = 0; i < n; ++i )
        cin >> buf, st[buf]++;
    if( b < c ) {
        for( ll i = 1; i < t; ++i )
            st[i] += st[i - 1], ans += st[i] * ( c - b );
    }
    cout << ans << '\n';
    return 0;
}