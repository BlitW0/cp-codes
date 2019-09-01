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
        ll n, s;
        cin >> n >> s;

        vector < pair <ll, ll> > a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }

        sort(a.begin(), a.end());
        ll lo = 0, hi = n, k;
        while (lo <= hi) {
            k = (lo + hi) >> 1;

            // cout << "for k = " << k << ":\n";
            ll sum = 0;
            vector <ll> tree(2*n, 0);

            for (ll i = 0; i < n; ) {
                ll j = i + 1;
                while (a[i].first == a[j].first && j < n)
                    j++;
                
                // cout << "for " << i << " go from " << i << " to " << j - 1 << '\n';
                for (ll x = i; x < j; ) {

                    ll l = max(0ll, a[x].second - k), r;
                    ll y = x + 1;
                    while (y < j && min(n - 1, a[y - 1].second + k) >= a[y].second) y++;

                    r = min(a[y - 1].second + k, n - 1) + 1;

                    // cout << "range comes out to be [" << l << ", " << r - 1 << "] -> ";

                    ll res = LLONG_MIN;
                    for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
                        if (l & 1) res = max(res, tree[l++]);
                        if (r & 1) res = max(res, tree[--r]);
                    }
                    // cout << res + 1 << '\n';

                    for (ll pos = x; pos < y; pos++) {
                        ll p = a[pos].second;
                        for (tree[p += n] = res + 1; p > 1; p >>= 1)
                            tree[p >> 1] = max(tree[p], tree[p ^ 1]);
                    }

                    // cout << "tree becomes ";
                    // for (ll tmp = 0; tmp < n; tmp++)
                    //     cout << tree[tmp + n] << ' ';
                    // cout << '\n';

                    x = y;
                }

                i = j;
            }

            for (ll i = 0; i < n; i++)
                sum += tree[i + n];

            if (sum <= s) lo = k + 1;
            else hi = k - 1;
        }

        cout << lo << '\n';
    }
    return 0;
}
