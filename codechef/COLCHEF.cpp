#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

ll id[100005], h[100005];

ll find(ll x) {
    while (id[x] != x)
        x = id[x];
    return x;
}

ll uno(ll a, ll b) {
    ll ra = find(a), rb = find(b);
    if (ra != rb) {
        if (h[ra] >= h[rb])
            id[rb] = ra, h[ra] = max(h[ra], h[rb] + 1);
        else
            id[ra] = rb, h[rb] = max(h[rb], h[ra] + 1);
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, q;
    cin >> n >> q;

    for (ll i = 1; i <= n; i++)
        id[i] = i;

    while (q--) {
        ll t;
        cin >> t;

        if (!t) {
            ll a, b;
            cin >> a >> b;
            uno(a, b);
        } else {
            ll x, y;
            cin >> x >> y;
            (find(x) != find(y)) ? cout << "NO\n" : cout << "YES\n";
        }
    }
    return 0;
}
