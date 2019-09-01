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

        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        vector <ll> ser;
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < n; j++)
                ser.push_back(a[i]*a[i] + a[j]*a[j]);
        
        ll ans = 0;
        sort(ser.begin(), ser.end());
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < n; j++)
                ans += upper_bound(ser.begin(), ser.end(), a[i]*a[i] + a[j]) - lower_bound(ser.begin(), ser.end(), a[i]*a[i] + a[j]);

        cout << ans << '\n';
    }
    return 0;
}
