#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

ll mexp(ll x, ll y, ll m) {
    ll res = 1; x %= m;
    for (; y; y >>= 1, x = (x*x) % m)
        if (y & 1)
            res = (res*x) % m;
    return res;
}

ll discretelog(ll a, ll b, ll m) {
    if (b == 1)
        return 0;

    ll n = (ll) ceil(sqrt(m));
    unordered_map <ll, ll> val;
    for (ll i = n; i >= 1; i--)
        val[mexp(a, i*n, m)] = i;
    
    for (ll j = 0; j < n; j++) {
        ll cur = mexp(a, j, m);
        cur = (cur * b) % m;
        if (val[cur]) {
            ll ans = val[cur]*n - j;
            if (ans <= (ll) 1e17)
                return ans;
        }
    }
    return 0;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll a, b, m;
        cin >> a >> b >> m;
        cout << discretelog(a, b, m) << '\n';
    }
    return 0;
}
