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
        ll n;
        cin >> n;

        vector <ll> pos(n + 1), a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            pos[x] = i + 1;
        }

        vector <ll> bit(n + 1, 0);
        for (ll i = 1; i <= n; i++)
            for (ll j = i; j <= n; j += j&-j)
                bit[j] += 1;

        ll sum = 0;
        for (ll i = 0; i < n; i++) {
            ll ind = pos[a[i]] - 1;
            for (; ind; ind -= ind&-ind)
                sum += bit[ind];
            for (ll j = pos[a[i]]; j <= n; j += j&-j)
                bit[j] -= 1;
        }
        cout << sum << '\n';
    }
    return 0;
}
