#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t; cin >> t;
    while(t--) {
        ll x, y; cin >> x >> y;
        ll ans = 0;
        while(x != y)
            (x > y) ? x >>= 1 : y >>= 1, ans++;
        cout << ans << '\n';
    }
    return 0;
} 