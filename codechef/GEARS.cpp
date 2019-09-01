#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
const ll N = 1e5 + 5;

ll id[N], val[N], h[N], sign[N];

ll find(ll x) {
    while (x != id[x])
        x = id[x];
    return x;
}

ll get(ll x) {
    ll res = 1;
    while (x != id[x])
        res *= sign[x], x = id[x];
    res *= sign[x];
    return res;
}

ll uno(ll x, ll y) {
    ll rx = find(x), ry = find(y);
    ll sx = get(x), sy = get(y);
    if (rx == ry) {
        if (sx == sy)
            sign[rx] = 0;
    } else {
        if (h[rx] >= h[ry]) {
            if (!sign[ry])
                sign[rx] = 0;
            else if (sx == sy)
                sign[ry] = -1;
            id[ry] = rx, h[rx] = max(h[rx], h[ry] + 1);
        } else {
            if (!sign[rx])
                sign[ry] = 0;
            else if (sx == sy)
                sign[rx] = -1;
            id[rx] = ry, h[ry] = max(h[ry], h[rx] + 1);
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m;
    cin >> n >> m;

    for (ll i = 1; i <= n; i++)
        cin >> val[i], sign[i] = 1, id[i] = i;
    
    while (m--) {
        ll type;
        cin >> type;

        ll x, y, c, v;
        if (type == 1) {
            cin >> x >> c;
            val[x] = c;
        } else if (type == 2) {
            cin >> x >> y;
            uno(x, y);
        } else {
            cin >> x >> y >> v;
            ll hcf = __gcd(v * val[x], val[y]), rx = find(x), ry = find(y);

            if (rx != ry)
                cout << 0 << '\n';
            else {
                if (!sign[rx])
                    cout << 0 << '\n';
                else {
                    cout << (get(x) * get(y)) * (v * val[x]) / hcf << '/' << val[y] / hcf << '\n';
                }
            }
        }
    }
    return 0;
}
