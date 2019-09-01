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
        string a, b;
        cin >> a >> b;

        ll x = 0, y = 0;
        for (ll i = 0; i < a.length(); i++)
            x += a[i] - '0', x %= 3;
        for (ll i = 0; i < b.length(); i++)
            y += b[i] - '0', y %= 3;
        
        cout << (x * y) % 3 << '\n';
    }
    return 0;
}
