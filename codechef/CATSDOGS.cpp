#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	long long c, d, l;
	cin >> c >> d >> l;
	if(l%4 != 0)
	    cout << "no\n";
	else {
	    long long x = d*4, y = d*4 + c*4;
	    if(c > 2*d) x += (c - 2*d)*4;
	    (l >= x && l <= y) ? cout << "yes\n" : cout << "no\n";
	}
    }
    return 0;
}
