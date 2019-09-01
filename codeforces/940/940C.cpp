#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n, k; cin >> n >> k;
	set <char> s; char c;
	string str; cin >> str;
	for(ll i = 0; i < n; i++)
		s.insert(str[i]);
	char ans[100007]; set <char> :: iterator itr;
	ans[k] = '\0'; itr = s.begin();
	if(k > str.length()) {
		for(ll i = k - 1; i >= str.length(); i--)
			ans[i] = *itr;
		for(ll i = str.length() - 1; i >= 0; i--)
			ans[i] = str[i];
		cout << ans << endl;
		return 0;
	}
	int fl = 0;
	for(ll i = k - 1; i >= 0; i--) {
		if(fl)
			ans[i] = str[i];
		else {
			itr = s.lower_bound(str[i]); itr++;
			if(itr != s.end()) {
				ans[i] = *itr;
				fl = 1;
			}
			else ans[i] = *(s.begin());
		}
	}
	cout << ans << endl;
	return 0;
}