#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n + 1];
    for(int i = 0; i < n; i++)
	cin >> a[i];
    int min = 1001, pos[2];
    for(int i = 0; i < n; i++)
    {
	if(abs(a[i] - a[(i + 1)%n]) < min)
	{
	    min = abs(a[i] - a[(i + 1)%n]);
	    pos[0] = i + 1; 
	    if(i + 2 > n) pos[1] = (i + 2)%n;
	    else pos[1] = i + 2;
	}
    }
    cout << pos[0] << " " << pos[1] << endl;
    return 0;
}