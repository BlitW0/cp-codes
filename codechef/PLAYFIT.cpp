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
        ll n;
        cin >> n;

        vector <ll> a(n), mx(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll temp_max = a[n - 1];
        for (ll i = n - 2; i >= 0; i--)
            mx[i] = temp_max, temp_max = max(temp_max, a[i]);
        
        ll ans = LLONG_MIN;
        for (ll i = 0; i < n - 1; i++)
            ans = max(ans, mx[i] - a[i]);
        
        (ans <= 0) ? cout << "UNFIT\n" : cout << ans << '\n';
    }
    return 0;
}
