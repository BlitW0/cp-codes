#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	string s; cin >> s;
	bool ok = 1;
	int a[26] = {0};
	for(int i = 0; i < s.length(); i++)
	    a[s[i] - 'A']++;
	int cnt = 0;
	for(int i = 0; i < 26; i++)
	    if(a[i])
		cnt++;
	if(cnt != 2) {
	    cout << "NO\n";
	    continue;
	}
	for(int i = 0; i + 2 < s.length(); i += 2)
	    if(s[i] != s[i + 2]) {
		ok = 0;
		break;
	    }
	for(int i = 1; i + 2 < s.length(); i += 2)
	    if(s[i] != s[i + 2]) {
		ok = 0;
		break;
	    }
	(ok) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
