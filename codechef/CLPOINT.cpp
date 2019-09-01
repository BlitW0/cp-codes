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
        ll n, k;
        cin >> n >> k;

        vector <ll> p[k];
        for (ll i = 0; i < n; i++)
            for (ll j = 0, buf; j < k; j++)
                cin >> buf, p[j].push_back(buf);

        for (ll i = 0; i < k; i++) {
            sort(p[i].begin(), p[i].end());
            if (n & 1) cout << p[i][n/2] << ' ';
            else cout << p[i][n/2 - 1] << ' ';
        } cout << '\n';
    }
    return 0;
}
