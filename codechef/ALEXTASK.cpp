#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	int n; cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++)
	    cin >> a[i];
	long long ans = 1000000000000000007;
	for(int i = 0; i < n; i++)
	    for(int j = i + 1; j < n; j++) {
		long long prod = a[i]*a[j];
		prod /= __gcd(a[i], a[j]);
		if(prod < ans) ans = prod; }
	cout << ans << endl;
    }
    return 0;
}
