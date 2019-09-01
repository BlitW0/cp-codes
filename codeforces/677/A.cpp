#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, h;
    cin >> n >> h;

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ll buf; cin >> buf;
        if (buf <= h) ans++;
        else ans += 2;
    }

    cout << ans << '\n';
    return 0;
}
