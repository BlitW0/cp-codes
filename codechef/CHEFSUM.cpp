#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t; cin >> t;
    while(t--) {
	ll n; cin >> n;
	ll a[n + 1], l[n + 1], r[n + 1];
	for(ll i = 0; i < n; i++)
	    cin >> a[i];
	l[0] = a[0];
	for(ll i = 1; i < n; i++)
	    l[i] = a[i] + l[i - 1];
	r[n - 1] = a[n - 1];
	for(ll i = n - 2; i >= 0; i--)
	    r[i] = a[i] + r[i + 1];
	ll min = 1e18, minind = n;
	for(ll i = n - 1; i >= 0; i--) {
	    if(l[i] + r[i] < min) {
		min = l[i] + r[i];
		minind = i + 1;
	    } else if(l[i] + r[i] == min)
		minind = i + 1;
	}
	cout << minind << '\n';
    }
    return 0;
}
