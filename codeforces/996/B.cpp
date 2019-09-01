#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll seq[100005];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll ans;
    for (ll i = 0; i < n; i++) {
        ll buf; cin >> buf;
        buf -= i;
        if (buf > 0) {
            seq[i] = ceil(buf / (double) n);
        }
    }

    ll mn = 1e18;
    for (ll i = 0; i < n; i++)
        if (seq[i] < mn)
            mn = seq[i], ans = i + 1;

    cout << ans << '\n';
    return 0;
}
