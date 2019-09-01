#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll a[n], up = -1;
    for (ll i = 0; i < n; i++)
        cin >> a[i], up = max(up, a[i]);
    
    ll ans = 0;
    for (ll i = 0; i < n; i++)
        ans += up - a[i];
    cout << ans << '\n';
    return 0;
}
