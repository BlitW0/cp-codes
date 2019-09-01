#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;

pll eo(ll n) {
    if (n & 1) {
        return make_pair(n/2, n/2 + 1);
    } else {
        return make_pair(n/2, n/2);
    }
}


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, q;
    cin >> n >> q;

    ll a1 = 1, b1 = (n*n)/2 + (n*n) % 2;
    ll a2 = b1 + 1, b2 = n*n;
    pll c = eo(n);

    while (q--) {
        ll x, y;
        cin >> x >> y;
        ll t = x + y;

        pll a = eo(x), b = eo(y - 1), d = eo(x - 1);
        if (t % 2 == 0) {
            ll tmp = d.first*c.first + d.second*c.second;
            if (x & 1) tmp += b.second;
            else tmp += b.first;
            cout << tmp + a1 << '\n';
        } else {
            ll tmp = d.second*c.first + d.first*c.second;
            if (x & 1) tmp += b.first;
            else tmp += b.second;
            cout << tmp + a2 << '\n';

        }
    }
    return 0;
}
