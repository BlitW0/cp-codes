#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, r, avg; cin >> n >> r >> avg;
    vector < pll > ex; ll sum = 0;
    for(ll i = 0; i < n; i++) {
        ll a, b; cin >> a >> b;
        ex.pb(mp(b, a)), sum += a;
    }
    if(sum >= avg * n)
        cout << 0;
    else {
        sort(ex.begin(), ex.end());
        ll ans = 0;
        for(ll req = avg * n - sum, cur = 0; req > 0; cur++) {
            ll m = min(req, r - ex[cur].second);
            ans += m * ex[cur].first, req -= m;
        }
        cout << ans;
    }
    cout << '\n';
}