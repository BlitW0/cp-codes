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
        ll l, r;
        cin >> l >> r;

        ll cnt = 0;
        for (ll i = l; i <= r; i++) {
            ll lst = i % 10;
            if (lst == 2 || lst == 3 || lst == 9)
                cnt++;
        }

        cout << cnt << '\n';
    }
    return 0;
}
