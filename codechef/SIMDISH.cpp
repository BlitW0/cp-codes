#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	map <string, bool> m;
	string buf;
	for(int i = 0; i < 4; i++)
	    cin >> buf, m[buf] = 1;
	int sim = 0;
	for(int i = 0; i < 4; i++) {
	    cin >> buf;
	    if(m[buf]) sim++;
	}
	(sim >= 2) ? cout << "similar\n" : cout << "dissimilar\n";
    }
    return 0;
}
