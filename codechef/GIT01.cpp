#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n, m;
	cin >> n >> m;
	string s[n];
	for(int i = 0; i < n; i++)
	    cin >> s[i];
	int costr = 0, costg = 0;
	for(int i = 0; i < n; i++)
	    for(int j = 0; j < m; j++) {
		if((i + j)%2 == 0)
		    (s[i][j] == 'R') ? costg += 5 : costr += 3;
		else
		    (s[i][j] == 'G') ? costg += 3 : costr += 5;
	    }
	cout << min(costr, costg) << '\n';
    }
    return 0;
}
