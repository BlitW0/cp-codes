#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
const ll M = 1e6 + 1;

ll fac[M];
bool prime[M];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;

    for (ll i = 2; i <= M; i++)
        prime[i] = 1, fac[i] = 0;
    for (ll i = 2; i <= M; i++)
        if (prime[i]) {
            fac[i] = 1;
            for (ll j = 2*i; j <= M; j += i) {
                prime[j] = 0, fac[j]++;
            }
        }

    while (t--) {
        ll n, m;
        cin >> n >> m;

        ll ans = 0;
        for (ll i = n; i < m; i++)
            ans += fac[i];
        cout << ans << '\n';
    }
    return 0;
}
