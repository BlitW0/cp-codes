#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
const ll mod = 1e9 + 7;

ll mexp(ll x, ll y) {
    ll res = 1;
    for (; y; y >>= 1, x = (x * x) % mod)
        if (y & 1)
            res = (res * x) % mod;
    return res;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, k;
    cin >> n >> k;

    ll tmp = mexp(2, n - 1);
    cout << ((tmp - n + mod) % mod * mexp(tmp, mod - 2)) % mod << '\n';
    return 0;
}
