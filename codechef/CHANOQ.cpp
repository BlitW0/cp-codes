#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
	int n; cin >> n;
	int l[n], r[n];
	for(int i = 0; i < n; i++)
	    cin >> l[i] >> r[i];
	int q; cin >> q;
	for(int i = 0; i < q; i++)
	{
	    int odd = 0;
	    int m; cin >> m; int a[m];
	    for(int j = 0; j < m; j++)
		cin >> a[j];
	    for(int j = 0; j < n; j++)
	    {
		int cnt = 0;
		for(int k = 0; k < m; k++)
		    if(l[j] <= a[k] && a[k] <= r[j])
			cnt++;
		if(cnt%2) odd++;
	    }
	    cout << odd << endl;
	}
    }
    return 0;
}
