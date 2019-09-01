#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
const ll MAXN = 1e5 + 7;

ll a[MAXN], premin[MAXN], premax[MAXN], postmin[MAXN], postmax[MAXN];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, p, q, r;
    cin >> n >> p >> q >> r;

    ll ans = LLONG_MIN;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        premin[i] = postmin[i] = a[i];
        premax[i] = postmax[i] = a[i];
    }

    for (ll i = 1; i < n; i++) {
        premin[i] = min(premin[i], premin[i - 1]);
        premax[i] = max(premax[i], premax[i - 1]);
    }
    for (ll i = n - 2; i >= 0; i--) {
        postmin[i] = min(postmin[i], postmin[i + 1]);
        postmax[i] = max(postmax[i], postmax[i + 1]);
    }

    for (ll i = 0; i < n; i++) {
        ll tmp = q*a[i];
        if (p > 0) tmp += p*premax[i];
        else tmp += p*premin[i];
        if (r > 0) tmp += r*postmax[i];
        else tmp += r*postmin[i];
        ans = max(tmp, ans);
    }

    cout << ans << '\n';
    return 0;
}
