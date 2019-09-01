#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	string s; cin >> s;
	int cnt = 0;
	for(int i = 0; i < s.length() && (cnt == 1 || cnt == 0); i++) {
	    if(s[i] == 'H') cnt++;
	    if(s[i] == 'T') cnt--;
	}
	(cnt == 0) ? cout << "Valid\n" : cout << "Invalid\n";
    }
    return 0;
}
