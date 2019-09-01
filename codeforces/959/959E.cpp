#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    ll n; cin >> n;
    ll ans = 0;
    for(ll i = 1; n > 1; n = n/2 + n%2, i <<= 1)
        ans += i*(n/2);
    cout << ans << '\n';
    return 0;
}