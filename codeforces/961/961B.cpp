#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
typedef long long ll;

struct the {
    ll val, sleep;
};

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, k; cin >> n >> k;
    the a[n + 1]; ll sum = 0;
    for(ll i = 0; i < n; i++) cin >> a[i].val;
    for(ll i = 0; i < n; i++) {
        cin >> a[i].sleep;
        if(a[i].sleep) sum += a[i].val;
    }
    pair <ll, ll> lr; lr = mp(0, k - 1);
    ll curval = 0, curcnt = 0;
    ll maxval = -1, maxcnt = -1;
    for(ll i = 0; i < k; i++)
        if(!a[i].sleep)
            curval += a[i].val;
    maxval = max(maxval, curval);
    for(ll i = k; i < n; i++) {
        if(!a[i - k].sleep) curval -= a[i - k].val;
        if(!a[i].sleep) curval += a[i].val;
        if(maxval < curval) maxval = max(maxval, curval), lr = mp(i - k + 1, i);
    }
    if(maxval != 0) {
        for(ll i = lr.first; i <= lr.second; i++)
            if(!a[i].sleep)
                sum += a[i].val;
    }
    cout << sum << '\n';
    return 0;
}