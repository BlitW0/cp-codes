#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    vector <ll> primes;
    for (ll i = 2; i <= 3000; i++) {
        bool p = 1;
        for (ll j = 2; j*j <= i; j++)
            if (i % j == 0)
                p = 0;
        if (p) primes.push_back(i);
    }

    ll t;
    cin >> t;

    while (t--) {
        ll x, y;
        cin >> x >> y;

        cout << *upper_bound(primes.begin(), primes.end(), x + y) - (x + y) << '\n';
    }
    return 0;
}
