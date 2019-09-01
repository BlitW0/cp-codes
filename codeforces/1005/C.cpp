#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

map <ll, ll> m;
ll a[120005];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++)
        cin >> a[i], m[a[i]]++;
    
    ll cnt = 0;
    for (ll i = 0; i < n; i++) {
        ll ser = (ll) ceil(log2(a[i]));
        bool found = 0;
        for (ll j = ser; j <= 30; j++) {
            ll x = (1ll << j) - a[i];
            if (x == a[i]) {
                if (m[x] > 1)
                    found = 1;
            } else {
                if (m[x])
                    found = 1;
            }
        }
        if (!found)
            cnt++;
    }

    cout << cnt << '\n';
    return 0;
}
