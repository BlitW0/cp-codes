#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	string s; cin >> s;
	char mx = 'A'; bool ok = 1;
	for(int i = 0; i < s.length(); i++) {
	    if(s[i] < mx) ok = 0;
	    else mx = max(mx, s[i]);
	}
	(ok) ? cout << "yes\n" : cout << "no\n";
    }
    return 0;
}
