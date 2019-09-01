#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll a[14], tmp[14], maxcnt = 0;
    for (ll i = 0; i < 14; i++)
        cin >> a[i];

    for (ll i = 0; i < 14; i++) {
        for (ll j = 1; j <= 14; j++) {
            ll t = (i + j) % 14;
            tmp[t] = a[t] + a[i] / 14;
        }
        tmp[i] = a[i] / 14;
        for (ll j = 1; j <= a[i] % 14; tmp[(i + j) % 14]++, j++);
        ll cnt = 0;
        for (ll j = 0; j < 14; j++)
            if (tmp[j] % 2 == 0)
                cnt += tmp[j];
        maxcnt = max(cnt, maxcnt);
    }
    cout << maxcnt << '\n';
    return 0;
}