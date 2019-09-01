#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t; cin >> t;
    for(ll j = 1; j <= t; j++)
    {
	ll m, n; cin >> m >> n;
	ll rx, ry; cin >> rx >> ry;
	ll len; cin >> len;
	string s; cin >> s;
	ll fx = 0, fy = 0;
	for(ll i = 0; i < len; i++)
	{
	    if(s[i] == 'U') fy++;
	    else if(s[i] == 'D') fy--;
	    else if(s[i] == 'L') fx--;
	    else if(s[i] == 'R') fx++;
	}
	cout << "Case " << j << ": ";
	if(fx == rx && fy == ry)
	    cout << "REACHED\n";
	else if(fx < 0 || fx > m || fy < 0 || fy > n)
	    cout << "DANGER\n";
	else
	    cout << "SOMEWHERE\n";
    }
    return 0;
}
