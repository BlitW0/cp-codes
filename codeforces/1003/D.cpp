#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

ll cnt[31];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, q;
    cin >> n >> q;

    for (ll i = 0; i < n; i++) {
        ll buf; cin >> buf;
        cnt[(ll) log2(buf)]++;
    }

    while (q--) {
        ll b, ans = 0; cin >> b;
        for (ll i = 30; i >= 0; i--) {
            ll p = 1ll << i;
            if (b >= p) {
                ll mul = min(b / p, cnt[i]);
                ans += mul;
                b -= mul * p;
            }
        }
        if (b > 0) cout << -1 << '\n';
        else cout << ans << '\n';
    }
    return 0;
}
