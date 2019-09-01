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
        ll n, s;
        cin >> n >> s;

        string ans; ans.resize(n);
        if (s > 9*n || (s == 1 && n != 1)) {
            cout << -1 << '\n';
            continue;
        }
        if (n & 1) {
            ll dig = 9;
            for (ll i = 0; i < n/2; i++) {
                while (2*dig > s)
                    dig--;
                s -= 2*dig;
                ans[i] = (char) (dig + '0');
                ans[n - i - 1] = (char) (dig + '0');
            }
            if (s > 9) {
                cout << -1 << '\n';
                continue;
            }
            ans[n/2] = (char) (s + '0');
        } else {
            if (s & 1) {
                cout << -1 << '\n';
                continue;
            }
            ll dig = 9;
            for (ll i = 0; i < n/2; i++) {
                while (2*dig > s)
                    dig--;
                s -= 2*dig;
                ans[i] = (char) (dig + '0');
                ans[n - i - 1] = (char) (dig + '0');
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
