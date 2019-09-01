#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	string s[n + 1];
	for(int i = 0; i < n; i++)
	    cin >> s[i];
	bool ok = 1;
	for(int i = 0; i < n - 1; i++)
	    if(s[i] == "cookie" && s[i + 1] != "milk") {
		ok = 0;
		break;
	    }
	if(s[n - 1] == "cookie") ok = 0;
	(ok) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
