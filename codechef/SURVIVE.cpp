#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n, k, s;
	cin >> n >> k >> s;
	if(s*k > n*(s - s/7))
	    cout << -1;
	else
	    cout << (s*k)/n + ((s*k)%n != 0);
	cout << '\n';
    }
    return 0;
}
