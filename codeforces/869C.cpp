#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
const ll mod = 998244353;

ll C[5005][5005], f[5005];

ll calc(ll acc, ll a, ll b) {
    ll x, y;
    for (ll i = 0, x = min(a, b), y = max(a, b); i <= x; i++)
        acc += (((f[i] * C[x][i]) % mod) * C[y][i]) % mod, acc %= mod;
    return acc;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll a, b, c;
    cin >> a >> b >> c;

    for (ll i = 0; i <= 5000; i++) {
        for (ll j = 0; j <= i; j++) {
            if (!j || j == i) C[i][j] = 1;
            else C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % mod;
        }
        if (!i) f[i] = 1;
        else f[i] = (i * f[i - 1]) % mod;
    }

    ll ans = calc(0, a, b);
    ans = (ans * calc(0, b, c)) % mod;
    ans = (ans * calc(0, c, a)) % mod;

    cout << ans << '\n';
    return 0;
}
