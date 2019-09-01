#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m;
    cin >> n >> m;

    ll pos, a[n], val[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == m)
            pos = i, val[i] = 0;
        else if (a[i] < m)
            val[i] = -1;
        else
            val[i] = 1;
    }

    vector <ll> f;
    ll sum = 0;
    for (ll i = pos; i < n; i++) {
        sum += val[i];
        f.push_back(sum);
    }
    sort(f.begin(), f.end());

    ll ans = 0;
    sum = 0;
    for (ll i = pos; i >= 0; i--) {
        sum += val[i];
        ans += upper_bound(f.begin(), f.end(), -sum) - lower_bound(f.begin(), f.end(), -sum);
        ans += upper_bound(f.begin(), f.end(), -sum + 1) - lower_bound(f.begin(), f.end(), -sum + 1);
    }

    cout << ans << '\n';
    return 0;
}
