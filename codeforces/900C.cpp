#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

ll cnt[MAXN];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, x; cin >> n;
    ll mx = 0, mx2 = 0;

    for (ll i = 0; i < n; i++) {
        cin >> x;
        if (x > mx) cnt[x] = 1, mx2 = mx, mx = x;
        else if (x > mx2) cnt[mx]--, mx2 = x;
    }

    ll ans = 1;
    for (ll i = 1; i <= n; i++)
        if (cnt[i] < cnt[ans])
            ans = i;

    cout << ans << '\n';
    return 0;
}