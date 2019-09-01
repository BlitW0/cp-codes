#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    while(t--)
    {
	int n; cin >> n;
	int l, r, a[1007];
	cin >> l >> r; a[0] = l;
	int prev = ++l;
	for(int i = 1; i < n; i++)
	{
	    cin >> l >> r;
	    if(r < prev)
	    { a[i] = 0; continue; }
	    prev = max(l, prev);
	    a[i] = prev;
	    prev++;
	}
	for(int i = 0; i < n; i++)
	    cout << a[i] << " ";
	cout << endl;
    }
    return 0;
}
