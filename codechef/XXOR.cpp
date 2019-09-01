#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, q; cin >> n >> q;
    ll a[n + 1];
    for(ll i = 1; i <= n; i++)
	cin >> a[i];
    ll c[n + 1][32];
    for(ll i = 0; i <= n; i++)
	for(ll j = 0; j < 32; j++)
	    c[i][j] = 0;
    for(ll i = 1; i <= n; i++) {
	ll tmp = a[i];
	for(ll j = 0; j < 32; j++) {
	    if(tmp&1) c[i][j] = c[i - 1][j] + 1;
	    else c[i][j] = c[i - 1][j];
	    tmp >>= 1;
	}
	cout << endl;
    }
    ll l, r;
    while(q--) {
	cin >> l >> r;
	ll ans = 0;
	for(ll i = 0; i < 31; i++)
	    if(2*(c[r][i] - c[l - 1][i]) < r - l + 1)
		ans = (ans^(1<<i));
	cout << ans << endl;
    }
    return 0;
}
