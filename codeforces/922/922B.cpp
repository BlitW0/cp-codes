#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    long cnt = 0;
    for(int a = 1; a <= n; a++)
    {
	for(int b = a + 1; b <= n; b++)
	{
	    long c = a^b;
	    if(c > 0 && c < a + b && b < a + c && a < b + c && b < c && c <= n) 
		cnt++;
	}
    }
    cout << cnt << endl;
}
