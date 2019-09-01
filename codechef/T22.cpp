#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    vector <ll> primes;
    for (ll i = 2; i <= 100; i++) {
        bool prime = 1;
        for (ll j = 2; j * j <= i; j++)
            if (i % j == 0)
                prime = 0;
        if (prime) primes.push_back(i);
    }

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        
        bool f = 0;
        ll ans = 1e18;
        for (ll i = 0; i < n - 1; i++)
            for (ll j = i + 1; j < n; j++) {
                bool tmp = 0;
                ll val;
                for (ll k = 0; k < primes.size() && !tmp; k++)
                    if (a[i] * a[j] == primes[k])
                        tmp = 1, val = primes[k];
                if (tmp)
                    f = 1, ans = min(ans, val);
            }
        
        if (!f) cout << -1 << '\n';
        else cout << ans << '\n';
    }
    return 0;
}
