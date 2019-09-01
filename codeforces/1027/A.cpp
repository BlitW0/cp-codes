#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll q;
    cin >> q;

    while (q--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        bool f = 1;
        for (ll i = 0; i < n/2; i++) {
            ll diff = abs(s[i] - s[n - i - 1]);
            if (diff != 0 && diff != 2)
                f = 0;
        }

        (f) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
