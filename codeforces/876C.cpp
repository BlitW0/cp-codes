#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    vector <ll> ans;
    for (ll i = max(n - 1000, 0ll); i < n; i++) {
        ll tmp = i;
        for (ll j = i; j; tmp += j % 10, j /= 10);
        if (tmp == n) ans.push_back(i);
    }

    cout << ans.size() << '\n';
    for (ll i = 0; i < (ll) ans.size(); i++)
        cout << ans[i] << '\n';
    return 0;
}
