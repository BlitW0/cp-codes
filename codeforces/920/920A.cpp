#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
	int n, k; cin >> n >> k;
	int a[207];
	for(int i = 0; i < k; i++)
	    cin >> a[i];
	if(k == n)
	{
	    cout << 1 << endl;
	    continue;
	}
	int t = max(a[0], n - a[k - 1] + 1);
	for(int i = 1; i < k; i++)
	    if((a[i] - a[i - 1])/2 + 1 > t)
		t = (a[i] - a[i - 1])/2 + 1;
	cout << t << endl;
    }
    return 0;
}
