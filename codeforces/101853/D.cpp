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

        ll cnt = 0;
        while (n--) {
            ll x;
            cin >> x;
            if (x)
                cnt++;
        }

        cout << cnt << '\n';
    }
    return 0;
}
