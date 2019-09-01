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
 
    ll t;
    cin >> t;
 
    while (t--) {
        ll n, k;
        cin >> n >> k;
 
        if (k == 1) {
            cout << 1 << '\n';
        } else {
            cout << ((k * (mexp(k, n) - 1 + mod) % mod) * (mexp(k - 1,mod - 2))) % mod << '\n';
        }
    }
    return 0;
}