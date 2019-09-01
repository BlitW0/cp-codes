#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 1e3 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n, k1, k2; cin >> n >> k1 >> k2;
    ll a[MAXN], b[MAXN];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];

    ll ans = 0, k = k1 + k2;
    while(k--) {
        ll mx = -1, mxind;
        for(ll i = 0; i < n; i++)
            if(abs(a[i] - b[i]) > mx)
                mx = abs(a[i] - b[i]), mxind = i;
        if(a[mxind] > b[mxind]) {
            if(k1 > k2) a[mxind]--, k1--;
            else b[mxind]++, k2--;
        } else {
            if(k1 > k2) a[mxind]++, k1--;
            else b[mxind]--, k2--;
        }
    }
    for(ll i = 0; i < n; i++)
        ans += (a[i] - b[i])*(a[i] - b[i]);
    cout << ans << '\n';
    return 0;
}