#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t; cin >> t;
    while(t--) {
	ll n, b, m; cin >> n >> b >> m;
	ll t = 0;
	while(n > 0) {
	    t += ((n + 1)/2)*m; m *= 2;
	    if(n > 1) t += b;
	    if(n&1) n -= (n + 1)/2;
	    else n -= n/2;
	}
	cout << t << endl;
    }
    return 0;
}
