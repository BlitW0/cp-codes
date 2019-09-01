#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll a, b, x;
    cin >> a >> b >> x;

    string ans = ""; ll tmp = (a > b) ? 0 : 1;
    for (ll i = 0; i < x - 1; i++) {
        ans += tmp + '0'; 
        (!tmp) ? a-- : b--;
        tmp ^= 1;
    }
    
    if (!tmp) {
        while (a--) ans += '0';
        while (b--) ans += '1';
    } else {
        while (b--) ans += '1';
        while (a--) ans += '0';
    }
    
    cout << ans << '\n';
    return 0;
}
