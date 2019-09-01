#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t; cin >> t;
    for(ll j = 1; j <= t; j++) {
	ll n; cin >> n;
	ll a[n + 1], b[n + 1];
	for(ll i = 0; i < n; i++)
	    cin >> a[i];
	cout << "Case " << j << ":\n";
	for(ll i = 0; i < n; i++)
	    cout << ( a[i] & ( (1 << 16) - 1 ) ) << ' ';
	cout << '\n';
	for(ll i = 0; i < n; i++)
	    cout << ( ( a[i] >> 16 ) ^ 0 ) << ' ';
	cout << '\n';
    }
    return 0;
}
