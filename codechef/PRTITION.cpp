#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

char ans[1000001];

bool rec(ll n, ll x, ll l, ll r) {
    if (n == x) {
        ans[n - 1] = '2';
        return rec(n - 1, x, l, r);
    }
    if (n == 0)
        return l == r;
    if (l < r) {
        if (rec(n - 1, x, l + n, r)) {
            ans[n - 1] = '0';
            return 1;
        } else {
            ans[n - 1] = '1';
            return rec(n - 1, x, l, r + n);
        }
    } else {
        if (rec(n - 1, x, l, r + n)) {
            ans[n - 1] = '1';
            return 1;
        } else {
            ans[n - 1] = '0';
            return rec(n - 1, x, l + n, r);
        }
    }
}


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll x, n;
        cin >> x >> n;

        ll sum = n*(n + 1)/2 - x;

        if (n == 2 || (sum & 1))
            cout << "impossible\n";
        else {
            if (rec(n, x, 0, 0)) {
                for (ll i = 0; i < n; i++)
                    cout << ans[i];
                cout << '\n';
            } else cout << "impossible\n";
        }
        
    }
    return 0;
}
