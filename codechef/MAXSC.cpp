#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
	int n; cin >> n;
	long long a[n][n];
	for(int i = 0; i < n; i++)
	    for(int j = 0; j < n; j++)
		cin >> a[i][j];
	for(int i = 0; i < n; i++)
	    sort(a[i], a[i] + n);
	long long ans = a[n - 1][n - 1];
	int prev = a[n - 1][n - 1];
	for(int i = n - 2; i >= 0; i--)
	{
	    int j;
	    for(j = n - 1; j >= 0; j--)
		if(a[i][j] < prev)
		    break;
	    if(j == -1) { ans = -1; break; }
	    ans += a[i][j];
	    prev = a[i][j];
	}
	cout << ans << endl;
    }
    return 0;
}
