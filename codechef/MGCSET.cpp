#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;

        ll cnt = 0;
        for (ll i = 0; i < n; i++) {
            ll x; cin >> x;
            if (x % m == 0)
                cnt++; 
        }

        cout << (1 << cnt) - 1 << '\n';
    }
    return 0;
}
