#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	bool a = 0, b = 0, c = 0, d = 0, e = 0;
	for(int i = 0; i < n; i++) {
	    string s; cin >> s;
	    if(!a && s == "cakewalk") a = 1;
	    if(!b && s == "simple") b = 1;
	    if(!c && s == "easy") c = 1;
	    if(!d && (s == "medium" || s == "easy-medium")) d = 1;
	    if(!e && (s == "hard" || s == "medium-hard")) e = 1;
	}
	if(a && b && c && d && e) cout << "Yes";
	else cout << "No";
	cout << '\n';
    }
    return 0;
}
