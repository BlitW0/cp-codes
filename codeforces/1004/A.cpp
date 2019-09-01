#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, d;
    cin >> n >> d;

    ll a[n], ans = 2;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    
    for (ll i = 0; i < n - 1; i++) {
        ll x = a[i] + d, y = a[i + 1] - d;
        if (x == y) ans++;
        else if (x < y) ans += 2;
    }

    cout << ans << '\n';
    return 0;
}
