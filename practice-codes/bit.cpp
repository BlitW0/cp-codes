#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

vector <ll> bit;

ll f(ll ind) {
    ll res = 0;
    for (; ind; ind -= (ind&-ind))
        res += bit[ind];
    return res;
}

void re(ll ind, ll diff, ll n) {
    for (; ind <= n; ind += (ind&-ind))
        bit[ind] += diff;
}

void build(vector <ll> a) {
    ll n = a.size();
    for (ll i = 1; i <= n; i++)
        re(i, 0, a[i - 1], n);
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    vector <ll> a({1, 4, 3, 2, 5, 1, 2, 3});
    bit.assign(a.size() + 1, 0);
    build(a);

    ll q;
    cin >> q;

    while (q--) {
        ll type;
        cin >> type;

        if (type) {
            ll l, r;
            cin >> l >> r;
            cout << f(r) - f(l - 1) << '\n';
        } else {
            ll ind, val;
            cin >> ind >> val;
            re(ind, val - a[ind - 1], a.size());
        }
    }
    return 0;
}
