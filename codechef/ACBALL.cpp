#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	string x, y;
	cin >> x >> y;
	for(int i = 0; i < x.length(); i++) {
	    if((x[i] == 'W' && y[i] == 'W') || (x[i] == 'W' && y[i] == 'B') || (x[i] == 'B' && y[i] == 'W')) cout << 'B';
	    else cout << 'W';
	}
	cout << '\n';
    }
    return 0;
}
