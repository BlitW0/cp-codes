#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll ans = 0;
    for (ll x = 0; x <= n; x++)
        for (ll y = 0; y <= n; y++)
            if (a*x + b*y <= n) {
                if ((n - a*x - b*y) % c == 0)
                    ans = max(ans, x + y + (n - a*x - b*y)/c);
            }

    cout << ans << '\n';
    return 0;
}
