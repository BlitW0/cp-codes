#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	long long a, b;
	cin >> a >> b;
	long long x = min(a, b), y = max(a, b);
	if(y == x + 2)
	    cout << "YES";
	else if(y - x == 1) {
	    if(x%2) cout << "YES";
	    else cout << "NO";
	} else
	    cout << "NO";
	cout << '\n';
    }
    return 0;
}
