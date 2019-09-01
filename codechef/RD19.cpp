#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector <ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        
        ll res = 0;
        for (ll i = 0; i < n; i++)
            res = __gcd(res, a[i]);
        (res == 1) ? cout << 0 << '\n' : cout << -1 << '\n';
    }
    return 0;
}