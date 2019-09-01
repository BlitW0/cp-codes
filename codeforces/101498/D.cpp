#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
const ll mod = 1e9 + 7;

ll f[100005], inv[100005];

ll mexp(ll x, ll y) {
    ll res = 1;
    while (y) {
        if (y & 1)
            res = (res * x) % mod;
        y >>= 1;
        x = (x * x) % mod;
    }
    return res;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;

    f[0] = 1;
    for (ll i = 1; i <= 100000; i++)
        f[i] = (f[i - 1] * i) % mod;

    inv[100000] = mexp(f[100000], mod - 2);
    for (ll i = 100000 - 1; i >= 0; i--)
        inv[i] = ((i + 1) * inv[i + 1]) % mod;

    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll n = a - 1, r = b;
        ll x = f[n], y = (inv[r] * inv[n - r]) % mod;
        cout << (2 * (x * y) % mod) % mod << '\n';
    }
    return 0;
}
