#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

ll mexp(ll x, ll y) {
    ll res = 1;
    for (; y; x = (x * x) % mod, y >>= 1)
        if (y & 1)
            res = (res * x) % mod;
    return res;
}

ll f(ll x) {
    if (x < 0) return x + mod;
    else return x;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll x, k; cin >> x >> k;
    if (x)
        cout << ((mexp(2, k) * f((2 * x) % mod - 1)) % mod + 1) % mod << '\n';
    else
        cout << 0 << '\n';
    return 0;
}
