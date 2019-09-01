#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

ll sum1(ll i) {
    return (i * (i + 1)) / 2;
}

ll sum2(ll i) {
    return (i * (i + 1) * (2*i + 1)) / 6;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll ans = 0;
    while ((sum2(ans) + sum1(ans)) / 2 <= n) ans++;
    cout << ans - 1 << '\n';
    return 0;
}
