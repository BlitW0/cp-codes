#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, k;
    cin >> n >> k;

    pair <ll, ll> a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i].first, a[i].second = i;
    
    vector <ll> ans;
    ll tot = 0;
    sort(a, a + n, greater < pair <ll, ll> >());
    for (ll i = 0; i < k; i++)
        ans.push_back(a[i].second), tot += a[i].first;

    sort(ans.begin(), ans.end());
    cout << tot << '\n';
    if (k == 1)
        cout << n << '\n';
    else {
        cout << ans[0] + 1 << ' ';
        ll tmp = ans[0] + 1;
        for (ll i = 1; i < ans.size() - 1; i++)
            cout << ans[i] - ans[i - 1] << ' ', tmp += ans[i] - ans[i - 1];
        cout << n - tmp << '\n';
    }
    return 0;
}
