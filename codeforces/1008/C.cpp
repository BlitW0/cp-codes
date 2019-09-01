#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

map <ll, ll> m;
set <ll> s;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++, s.insert(a[i]);
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        auto it = s.upper_bound(a[i]);
        if (it != s.end()) {
            ll tmp = m[*it];
            if (tmp) {
                m[*it]--, ans++;
                if (!m[*it])
                    s.erase(*it);
            }
        }
    }

    cout << ans << '\n';
    return 0;
}
