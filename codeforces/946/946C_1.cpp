#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;
const ll m = 1e9 + 9;

ll mexp( ll x, ll y ) {
    ll res = 1;
    for (; y; y >>= 1, x = (x * x) % m)
        if (y & 1)
            res = (res * x) % m;
    return res;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, a, b, k; char sign;
    cin >> n >> a >> b >> k;

    ll ans = 0, r = (b * mexp(a, m - 2)) % m;
    r = mexp(r, k);

    for (ll i = 0; i < k; i++) {
        cin >> sign;
        ll x = (mexp(a, n - i) * mexp(b, i)) % m;    
        (sign == '+') ? ans += x : ans -= x;
        if (ans < 0) ans += m; ans %= m;
    }

    n = (n + 1) / k;
    ll mul = ((mexp(r, n) - 1) * mexp(r - 1, m - 2)) % m;
    if (r != 1) ans = (ans * mul) % m;
    else ans = (ans * n) % m;

    cout << ans << '\n';
    return 0;
}