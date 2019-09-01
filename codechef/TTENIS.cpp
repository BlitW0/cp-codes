#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	string s; cin >> s;
	int p1 = 0, p2 = 0, len = s.length();
	bool done = 0;
	for(int i = 0; i < min(20, len); i++) {
	    p1 += (s[i] - '0'), p2 += (s[i] - '0')^1;
	    if(p1 == 11) { cout << "WIN"; done = 1; break; }
	    if(p2 == 11) { cout << "LOSE"; done = 1; break; }
	}
	if(!done) {
	    for(int i = 20; i < len; i++) {
		p1 += (s[i] - '0'), p2 += (s[i] - '0')^1;
		if(p1 > p2 && p1 == p2 + 2) { cout << "WIN"; break; }
		if(p2 > p1 && p2 == p1 + 2) { cout << "LOSE"; break; }
	    }
	}
	cout << '\n';
    }
    return 0;
}
