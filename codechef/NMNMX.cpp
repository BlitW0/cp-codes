#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
const ll mod = 1e9 + 7;
 
ll C[5005][5005];
 
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
 
    ll t;
    cin >> t;
 
    for (ll i = 0; i <= 5000; i++) {
        C[i][0] = C[i][i] = 1;
        for (ll j = 1; j < i; j++)
            C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % (mod - 1);
    }
 
    while (t--) {
        ll n, k;
        cin >> n >> k;
 
        ll a[n], val[n], init = C[n - 1][k - 1];
        for (ll i = 0; i < n; i++)
            cin >> a[i], val[i] = init;
        
        sort(a, a + n);
        ll ans = 1;
        for (ll i = 0; i < n; i++) {
            for (ll j = i + k - 1; j < n; j++) {
                ll tmp = C[j - i - 1][k - 2];
                val[i] = (val[i] - tmp + mod - 1) % (mod - 1);
                val[j] = (val[j] - tmp + mod - 1) % (mod - 1);
            }
            ans = (ans * mexp(a[i], val[i])) % mod;
        }
        cout << ans << '\n';
    }
    return 0;
}
