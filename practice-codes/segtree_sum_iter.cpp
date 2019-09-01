#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1e5 + 7;

ll tree[2 * MAX], inp[MAX];

void build(ll n) {
    for(ll i = 0; i < n; i++)
        tree[n + i] = inp[i];
    for(ll i = n - 1; i > 0; i--)
        tree[i] = tree[i << 1] + tree[i << 1 | 1];
}

void update(ll pos, ll val, ll n) {
    for(tree[pos += n - 1] = val; pos > 1; pos >>= 1)
        tree[pos >> 1] = tree[pos] + tree[pos ^ 1];
}

ll query(ll l, ll r, ll n) {
    ll res = 0;
    for(l += n - 1, r += n - 1; l < r; l >>= 1, r >>= 1) {
        if(l & 1) res += tree[l++];
        if(r & 1) res += tree[--r];
    }
    return res;
}

int main() {
    ll n; cin >> n;
    for(ll i = 0; i < n; i++)
        cin >> inp[i];
    build(n);
    ll q; cin >> q;
    while(q--) {
        ll type; cin >> type;
        if(type) {
            ll l, r; cin >> l >> r;
            cout << query(l, r + 1, n) << '\n';
        } else {
            ll pos, val; cin >> pos >> val;
            update(pos, val, n);
        }
    }
    return 0;
}