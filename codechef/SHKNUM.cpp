#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;

    vector <ll> v;
    for (ll i = 0; i < 32; i++) {
        for (ll j = i + 1; j < 32; j++) {
            v.push_back((1ll << i) | (1ll << j));
        }
    }

    while (t--) {
        ll n;
        cin >> n;

        ll ans = LLONG_MAX;
        for (auto x : v)
            ans = min(ans, abs(x - n));
        cout << ans << '\n';
    }
    return 0;
}
