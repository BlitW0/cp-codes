#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    ll ans;
    if (n % m == 0)
        ans = 0;
    else {
        ll mul = n / m;
        ans = min((n - mul * m) * b, ((mul + 1) * m - n) * a);
    }

    cout << ans << '\n';
    return 0;
}