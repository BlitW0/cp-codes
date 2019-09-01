#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t = 0, n, h, k, rem = 0;
    cin >> n >> h >> k;

    for (ll i = 0; i < n; i++) {
        ll buf; cin >> buf;
        if (rem + buf <= h)
            rem += buf;
        else t++, rem = buf;
        t += rem / k;
        rem %= k;
    }

    t += rem / k, rem %= k;
    if (rem) t++;
    cout << t << '\n';
    return 0;
}
