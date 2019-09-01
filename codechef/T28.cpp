#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
const ll mod = 1e9 + 9;

ll mexp(ll x, ll y) {
    ll res = 1;
    for (; y; y >>= 1, x = (x * x) % mod)
        if (y & 1)
            res = (res * x) % mod;
    return res;
}

map <ll, ll> m;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, q;
    cin >> n >> q;

    for (ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        m[2 * a * b + max(a, b)]++;
    }

    while (q--) {
        ll k;
        cin >> k;
        
        k = (k * (k + 1)) / 2;
        if (!m[k]) cout << -1 << '\n';
        else cout << mexp(m[k], mod - 2) << '\n';
    }

    return 0;
}
