#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{
    ll t; cin >> t;
    while(t--)
    {
	ll n, cnt = 0; cin >> n;
	vector <ll> a, b;
	a.pb(0); ll x;
	for(ll i = 0; i < n; i++) {
	    cin >> x; a.pb(x); }
	for(ll i = 0; i < n; i++) {
	    cin >> x; b.pb(x); }
	for(ll i = 1; i <= n; i++)
	    if(a[i] - a[i - 1] >= b[i - 1])
		cnt++;
	cout << cnt << endl;
    }
    return 0;
}
