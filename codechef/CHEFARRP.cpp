#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
	int n; cin >> n;
	int a[57];
	for(int i = 0; i < n; i++)
	    cin >> a[i];
	long long cnt = 0;
	for(int i = 0; i < n; i++)
	    for(int j = 1; j <= n - i; j++) {
		long long sum = 0, prod = 1;
		for(int k = i; k < i + j; k++) {
		    sum += a[k]; prod *= a[k]; }
		if(sum == prod) cnt++;
	    }
	cout << cnt << endl;
    }
    return 0;
}
