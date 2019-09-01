#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;

    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);

        bool f = 0;
        ll n = (ll) s.length();
        for (ll i = 1; i <= n/2; i++) {
            bool x = 1;
            ll j = i;
            for (; j < n; j += i + 1)
                if (s[j] != ' ')
                    x = 0;
            if (j != n)
                x = 0;
            if (x) {
                f = 1;
                break;
            }
        }

        (f) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
