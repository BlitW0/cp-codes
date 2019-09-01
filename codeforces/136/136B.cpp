#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll a, c; cin >> a >> c;
    ll ans = 0, bit;
    for(ll tre = 1, base = 3; ; c /= base, a /= base, tre *= 3) {
        if(!a && !c) break;
        bit = c % base - a % base;
        if(bit < 0) bit += 3;
        ans += bit * tre;
    }
    cout << ans << '\n';
    return 0;
}