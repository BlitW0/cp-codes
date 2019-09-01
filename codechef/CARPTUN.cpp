#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
	int n; cin >> n;
	int buf, mx = -1;
	for(int i = 0; i < n; i++)
	{
	    cin >> buf;
	    mx = max(mx, buf);
	}
	int c, d, s; cin >> c >> d >> s;
	printf("%.9lf\n", (double) mx*(c - 1));
    }
    return 0;
}
