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

        vector <ll> cnt(10001, 0);
        while (n--) {
            ll x;
            cin >> x;
            cnt[x]++;
        }

        ll ans = LLONG_MIN;
        for (ll i = 1; i < 10000; i++)
            ans = max(ans, cnt[i] + cnt[i + 1]);
        
        cout << ans << '\n';
    }
    return 0;
}
