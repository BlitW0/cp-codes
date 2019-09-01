#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

ll a[1005];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, l;
    cin >> n >> l;

    for (ll i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    ld ans = a[0];
    for (ll i = 1; i < n; i++)
        ans = max(ans, (a[i] - a[i - 1]) / (ld) 2);
    ans = max(ans, (ld) (l - a[n - 1]));
    cout << setprecision(10) << ans << '\n';
    return 0;
}
