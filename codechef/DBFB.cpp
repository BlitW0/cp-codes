#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const ll MAXN = 1e5 + 7;
const ll mod = 1e9 + 7;

ll fib[MAXN];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    fib[0] = 1, fib[1] = 0, fib[2] = 1;
    for (ll i = 3; i < MAXN; i++)
        fib[i] = (fib[i - 1] + fib[i - 2]) % mod;

    ll t; cin >> t;
    while (t--) {
        ll m, n, buf; cin >> m >> n;
        ll suma = 0, sumb = 0;
        for (ll i = 0; i < m; i++)
            cin >> buf, suma += buf, suma %= mod;
        for (ll i = 0; i < m; i++)
            cin >> buf, sumb += buf, sumb %= mod;
        
        ll mul1 = (suma * m) % mod, mul2 = (sumb * m) % mod;
        cout << ((fib[n - 1] * mul1) % mod + (fib[n] * mul2) % mod) % mod << '\n';
    }
    return 0;
}