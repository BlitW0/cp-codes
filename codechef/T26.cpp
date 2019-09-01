#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m;
    cin >> n >> m;

    ll a[100005] = {0};
    while (m--) {
        ll l, r;
        cin >> l >> r;
        a[l - 1]++, a[r]--;
    }

    for (ll i = 1; i < n; i++)
        a[i] += a[i - 1];
    
    sort(a, a + n);
    ll q;
    cin >> q;

    while (q--) {
        ll k;
        cin >> k;

        cout << (a + n) - lower_bound(a, a + n, k) << '\n';
    }
    return 0;
}
