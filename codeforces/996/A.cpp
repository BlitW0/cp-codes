#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n; cin >> n;

    ll ans = 0;
    if (n >= 100)
        ans += n / 100, n = n - (n / 100) * 100;
    if (n >= 20)
        ans += n / 20, n = n - (n / 20) * 20;
    if (n >= 10)
        ans += n / 10, n = n - (n / 10) * 10;
    if (n >= 5)
        ans += n / 5; n = n - (n / 5) * 5;
    if (n >= 1)
        ans += n;
    cout << ans << '\n';
    return 0;
}
