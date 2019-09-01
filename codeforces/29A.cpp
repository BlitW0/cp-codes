#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n + 1][2];
    for(int i = 0; i < n; i++)
	cin >> a[i][0] >> a[i][1];
    for(int i = 0; i < n; i++)
    {
	int spit = a[i][0] + a[i][1];
	for(int j = 0; j < n; j++)
	{
	    if(j != i && a[j][0] + a[j][1] == a[i][0] && spit == a[j][0])
	    {
		cout << "YES\n";
		return 0;
	    }
	}
    }
    cout << "NO\n";
    return 0;
}
