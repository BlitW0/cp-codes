#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n; cin >> n;
	int a[107] = {0}; int x, y;
	for(int i = 1; i < n; i++)
	    cin >> a[i + 1];
	cin >> x >> y;
	for(int i = 2; i < n + 1; i++)
	    a[i] += a[i - 1];
	cout << a[y] - a[x] << endl;
	return 0;
}
