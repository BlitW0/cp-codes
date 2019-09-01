#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

ll f(ll a, ll b) {
    ll res;
    if (a == b) res = 0;
    else if (a > b) res = 1;
    else res = 2;
    return res;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t; cin >> t;
    while (t--) {
        ll a, b, n;
        cin >> a >> b >> n;
        if (n == 0) cout << 0 << '\n';
        else if (n & 1) cout << f(a, b) << '\n';
        else cout << f( abs(a), abs(b) ) << '\n';
    }
    return 0;
}
