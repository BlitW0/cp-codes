#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n; cin >> n;
    ll a[n + 1];
    for(ll i = 0; i < n; i++)
	cin >> a[i];
    string s; cin >> s;
    ll r = 1e9, l = -1e9;
    for(ll i = 4; i < s.length(); i++)
    {
	ll wind[] = {a[i], a[i - 1], a[i - 2], a[i - 3], a[i - 4]};
	sort(wind, wind + 5);
	if(s[i] == '0') {
	    if(wind[0] - 1 < r && s[i - 1] == '1' && s[i - 2] == '1' && s[i - 3] == '1' && s[i - 4] == '1')
		r = wind[0] - 1;
	} else if(s[i] == '1') {
	    if(wind[4] + 1 > l && s[i - 1] == '0' && s[i - 2] == '0' && s[i - 3] == '0' && s[i - 4] == '0')
		l = wind[4] + 1;
	}
    }
    cout << l << " " << r << endl;
    return 0;
}
