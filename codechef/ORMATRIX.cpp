#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

bool find(ll i, ll j, string s[], ll n, ll m) {
    bool x = 0, y = 0;
    for (ll k = 0; k < n; k++)
        if (s[k][j] == '1') {
            x = 1;
            break;
        }
    for (ll k = 0; k < m; k++)
        if (s[i][k] == '1') {
            y = 1;
            break;
        }
    return x || y;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;

        string s[n];
        ll zero = 0;
        for (ll i = 0; i < n; i++)
            cin >> s[i];
        
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < m; j++)
                if (s[i][j] == '0')
                    zero++;
        
        if (zero == n*m) {
            for (ll i = 0; i < n; i++) {
                for (ll j = 0; j < m; j++)
                    cout << -1 << ' ';
                cout << '\n';
            }
        } else {
            for (ll i = 0; i < n; i++) {
                for (ll j = 0; j < m; j++) {
                    if (s[i][j] == '1') {
                        cout << 0 << ' ';
                        continue;
                    }
                    if (find(i, j, s, n, m))
                        cout << 1 << ' ';
                    else
                        cout << 2 << ' ';
                } cout << '\n';
            }
        }

    }
    return 0;
}
