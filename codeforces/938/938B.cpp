#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[100007];
    for(int i = 0; i < n; i++)
	cin >> a[i];
    int x = 1, y = 1e6;
    int t = 0; int cnt = 0, xi = 0, yi = n - 1;
    while(cnt < n)
    {
	if(a[xi] - x < y - a[yi]) {
	    t += a[xi] - x;
	    y -= a[xi] - x;
	    x = a[xi++]; }
	else {
	    t += y - a[yi];
	    x += y - a[yi];
	    y = a[yi--]; }
	cnt++;
    }
    cout << t << endl;
    return 0;
}
