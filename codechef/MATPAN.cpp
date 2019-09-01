#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {

	int cost[26];
	for(int i = 0; i < 26; i++)
	    cin >> cost[i];

	string s; int pres[26] = {0};
	cin >> s;
	for(int i = 0; i < s.length(); i++)
	    pres[s[i] - 'a']++;

	long long ans = 0;
	for(int i = 0; i < 26; i++)
	    if(!pres[i])
		ans += cost[i];

	cout << ans << '\n';
    }

    return 0;
}
