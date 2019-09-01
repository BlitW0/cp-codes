#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, h, a, b, k;
    cin >> n >> h >> a >> b >> k;

    while (k--) {
        ll ta, fa, tb, fb;
        cin >> ta >> fa >> tb >> fb;

        ll ans = abs(tb - ta);
        if (tb != ta) {
            if (fa < a && fb < a) ans += 2*a - fa - fb;
            else if (fb > b && fa > b) ans += fa + fb - 2*b;
            else ans += abs(fb - fa);
        } else ans += abs(fb - fa);

        cout << ans << '\n';
    }
    return 0;
}
