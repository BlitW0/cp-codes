#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll n, ll k) {
    ll res = 0;
    while (n > 0) {
        if (n >= k)
            res += k, n -= k + (n - k) / 10;
        else
            res += n, n = 0;
    }
    return res;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll lo = 1, hi = (ll) 1e18, mid;
    while (lo <= hi) {
        mid = (lo + hi) >> 1;
        if (2 * f(n, mid) >= n) hi = mid - 1;
        else lo = mid + 1;
    }

    cout << lo << '\n';
    return 0;
}
