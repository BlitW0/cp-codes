#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	string s; cin >> s;
	int cnt = 0;
	for(int i = 0; i < s.length(); ) {
	    if(s[i] == '<' && s[i + 1] == '>') {
		cnt++; i += 2;
	    }
	    else i++;
	}
	cout << cnt << endl;
    }
    return 0;
}
