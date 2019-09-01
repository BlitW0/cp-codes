#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

ld a[5005];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, k;
    cin >> n >> k;

    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ld ans = -1.00;
    for (ll i = k; i <= n; i++) {
        ld sum = 0;
        for (ll j = 0; j < i; j++)
            sum += a[j];
        ans = max(ans, sum / (ld) i);
        for (ll j = i; j < n; j++)
            sum -= a[j - i], sum += a[j], ans = max(ans, sum / (ld) i);
    }

    cout << setprecision(10) << ans << '\n';
    return 0;
}
