#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t; cin >> t;
    while(t--) {
	ll n, k;
	cin >> n >> k;
	ll ans = 0, buf;
	for(ll i = 0; i < n; i++) {
	    cin >> buf;
	    ll m = buf%k;
	    if(buf < k) ans += k - m;
	    else ans += min(m, k - m);
	}
	cout << ans << '\n';
    }
    return 0;
}
