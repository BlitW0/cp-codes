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
	ll a[n + 1], j;
	for(ll i = 0; i < n; i++)
	    cin >> a[i];
	ll cnt = 0;
	for(ll i = 0; i < n; ) {
	    ll j = i + 1;
	    while(a[j - 1] <= a[j] && j < n) j++;
	    cnt += ((j - i)*(j - i + 1))/2, i = j;
	}
	cout << cnt << '\n';
    }
    return 0;
}
