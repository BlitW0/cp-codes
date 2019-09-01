#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

vector < pair <ll, ll> > ans;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m;
    cin >> n >> m;

    if (m < n - 1) {
        cout << "Impossible\n";
        return 0;
    }

    for (ll i = 1; i <= n && m; i++)
        for (ll j = i + 1; j <= n && m; j++)
            if (__gcd(i, j) == 1)
                ans.push_back(make_pair(i, j)), m--;
    
    if (m)
        cout << "Impossible\n";
    else {
        cout << "Possible\n";
        for (ll i = 0; i < ans.size(); i++)
            cout << ans[i].first << ' ' << ans[i].second << '\n';
    }
    return 0;
}
