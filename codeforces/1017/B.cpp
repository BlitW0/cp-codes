#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i] == '0') {
            x++;
            if (b[i] == '0')
                x--;
        } else {
            y++;
        }
    }
    
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if (b[i] == '0') {
            if (a[i] == '0')
                ans += y;
            else
                ans += x;
        }
    }
    cout << ans << '\n';
    return 0;
}
