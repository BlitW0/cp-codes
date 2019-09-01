#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	string s; cin >> s;
	int disu = 0, disd = 0;
	for(int i = 0; i < s.length(); ) {
	    if(s[i] == 'U') {
		while(s[i] == 'U') i++;
		disu++;
	    } else {
		while(s[i] == 'D') i++;
		disd++;
	    }
	}
	cout << min(disu, disd) << '\n';
    }
    return 0;
}
