#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >> str;
    int known[26] = {0};
    for(int i = 0; i < str.length(); i++)
	known[str[i] - 'a']++;
    int t; cin >> t;
    while(t--) {
	string s; cin >> s;
	int tmp[26] = {0};
	for(int i = 0; i < s.length(); i++)
	    tmp[s[i] - 'a']++;
	int ok = 1;
	for(int i = 0; i < 26; i++)
	    if(tmp[i] && !known[i])
		ok = 0;
	(ok) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}
