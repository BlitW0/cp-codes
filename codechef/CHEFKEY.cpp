#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--) {

	int n, m, c;
	cin >> n >> m >> c;

	int ans = 0, i;
	for(i = 1; i*i < c; i++)
	    if(c%i == 0) {
		if(i <= n && c/i <= m) ans++;
		if(i <= m && c/i <= n) ans++;
	    }
	if(i*i == c && i <= n && i <= m) ans++;

	cout << ans << '\n';
    }

    return 0;
}
