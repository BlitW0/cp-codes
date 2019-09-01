#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const ll MAX = 2e5 + 7;

vector <ll> tree[8*MAX];
ll inp[MAX];

void build(ll lo, ll hi, ll ind) {
    if(lo == hi) {
        tree[ind].pb(inp[lo]);
        return;
    }
    ll mid = (lo + hi) >> 1;
    build(lo, mid, (ind << 1) + 1), build(mid + 1, hi, (ind << 1) + 2);
    ll i, j; i = j = 0;
    ll l = (ind << 1) + 1, r = (ind << 1) + 2;
    while(i < tree[l].size() && j < tree[r].size()) {
        if(tree[l][i] <= tree[r][j]) tree[ind].pb(tree[l][i++]);
        else tree[ind].pb(tree[r][j++]);
    }
    while(i < tree[l].size()) tree[ind].pb(tree[l][i++]);
    while(j < tree[r].size()) tree[ind].pb(tree[r][j++]);
}

ll query(ll l, ll r, ll lo, ll hi, ll ind, ll x) {
    if(l > hi || r < lo)
        return 0;
    else if(l == lo && r == hi) {
        return tree[ind].end() - lower_bound(tree[ind].begin(), tree[ind].end(), x);
    } else {
        ll mid = (lo + hi) >> 1;
        if(l > mid) return query(l, r, mid + 1, hi, (ind << 1) + 2, x);
        else if(r <= mid) return query(l, r, lo, mid, (ind << 1) + 1, x);
        else return query(l, mid, lo, mid, (ind << 1) + 1, x) + query(mid + 1, r, mid + 1, hi, (ind << 1) + 2, x);
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    ll n; cin >> n;
    for(ll i = 0; i < n; i++)
        cin >> inp[i];
    build(0, n - 1, 0);
    ll ans = 0;
    for(ll i = 0; i < n - 1; i++) {
        ll l = i + 1, r = min(inp[i] - 1, n - 1);
        if(l <= r)
            ans += query(l, r, 0, n - 1, 0, i + 1);
    }
    cout << ans << '\n';
    return 0;
}