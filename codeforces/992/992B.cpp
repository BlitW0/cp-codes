#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll l, r, x, y;
    cin >> l >> r >> x >> y;

    set <ll> fact;
    for (ll i = 1; i * i <= y; i++)
        if (y % i == 0)
            fact.insert(i), fact.insert(y / i);
    
    ll ans = 0;
    for (auto it = fact.begin(); it != fact.end(); it++) {
        ll a = *it;
        ll b = (x * y) / a;
        if (a >= l && a <= r)
            if (b >= l && b <= r)
                if (__gcd(a, b) == x)
                    ans++;
        // cout << a << ' ' << b << '\n';
    }

    cout << ans << '\n';
    return 0;
}
