#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[1007];
    for(int i = 0; i < n; i++)
	cin >> a[i];
    sort(a, a + n);
    int ans;
    for(int i = n - 1; i >= 0; i--)
    {
	if(a[i] >= 0) {
	    if((int) sqrt(a[i]) != sqrt(a[i])) {
		ans = a[i]; break; }
	}
	else
	{
	    ans = a[i];
	    break;
	}
    }
    cout << ans << endl;
}
