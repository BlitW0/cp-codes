#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[3007] = {0}, buf;
    for(int i = 0; i < n; i++)
    {
	cin >> buf;
	a[buf] = 1;
    }
    for(int i = 1; i <= 3001; i++)
    {
	if(a[i] == 0)
	{
	    cout << i << endl;
	    break;
	}
    }
    return 0;
}
