#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    bool f = 1;
    if (t.length() >= (ll) s.length() - 1) {
        ll pos = -1;
        for (ll i = 0; i < s.length(); i++)
            if (s[i] == '*')
                pos = i;
            
        if (pos == -1) {
            if (n != m)
                f = 0;
            else {
                for (ll i = 0; i < n; i++)
                    if (s[i] != t[i])
                        f = 0;
            }
        } else {
        
            ll x = 0, y = 0;
            for (ll i = 0; i < pos; i++) {
                if (s[i] != t[i]) {
                    break;
                } else {
                    x++;
                }
            }

            for (ll i = s.length() - 1, j = t.length() - 1; i > pos; i--, j--) {
                if (s[i] != t[j]) {
                    break;
                } else y++;
            }
            // cout << x << ' ' << y << '\n';

            if (x + y + 1 != s.length())
                f = 0;
        }

    } else f = 0;

    (f) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
