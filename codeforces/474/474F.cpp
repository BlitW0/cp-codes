#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

vector <ll> tree[2 * MAXN];
ll inp[MAXN], gcd[2 * MAXN], n;

void build() {
    for (ll i = n - 1; i > 0; i--) {
        ll lc = (i << 1), rc = (i << 1 | 1);
        gcd[i] = __gcd(gcd[lc], gcd[rc]);
        merge(tree[lc].begin(), tree[lc].end(), tree[rc].begin(), tree[rc].end(), back_inserter(tree[i]));
    }
}

ll getgcd(ll l, ll r, ll tmp) {
    for (l += n - 1, r += n - 1; l < r; l >>= 1, r >>= 1) {
        if (l & 1) tmp = __gcd(tmp, gcd[l++]);
        if (r & 1) tmp = __gcd(tmp, gcd[--r]);
    }
    return tmp;
}

ll query(ll l, ll r, ll x) {
    ll cnt = 0;
    for (l += n - 1, r += n - 1; l < r; l >>= 1, r >>= 1) {
        if (l & 1) {
            if (tree[l][0] == x)
                cnt += upper_bound(tree[l].begin(), tree[l].end(), x) - tree[l].begin();
            l++;
        }
        if (r & 1) {
            --r;
            if (tree[r][0] == x)
                cnt += upper_bound(tree[r].begin(), tree[r].end(), x) - tree[r].begin();
        }
    }
    return cnt;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> inp[i], tree[i + n].pb(inp[i]), gcd[i + n] = inp[i];
    
    build();
    
    ll t; cin >> t;
    while (t--) {
        ll l, r; cin >> l >> r;
        cout << r - l + 1 - query(l, r + 1, getgcd(l, r + 1, inp[l - 1])) << '\n';
    }
    return 0;
}