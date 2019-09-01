#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t; cin >> t;
    while(t--) {
	ll n, k, e, m;
	cin >> n >> k >> e >> m;
	ll sum[n + 1], buf;
	for(ll i = 0; i < n - 1; i++) {
	    sum[i] = 0;
	    for(ll j = 0; j < e; j++)
		cin >> buf, sum[i] += buf;
	}
	ll fin = 0;
	for(ll i = 0; i < e - 1; i++)
	    cin >> buf, fin += buf;
	sort(sum, sum + n - 1, greater <ll>());
	ll req = sum[k - 1] + 1 - fin;
	if(req > m) cout << "Impossible\n";
	else (req < 0) ? cout << "0\n" : cout << req << '\n';
    }
    return 0;
}
