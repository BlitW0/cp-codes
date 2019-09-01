#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
	int n; cin >> n;
	int m[3]; m[0] = m[1] = m[2] = -1;
	int ind[3]; ind[0] = ind[1] = ind[2] = 101;
	int c, l, dis;
	for(int i = 0; i < n; i++)
	{
	    cin >> c >> l >> dis;
	    if(dis > m[l - 1]) {
		ind[l - 1] = c;
		m[l - 1] = dis; }
	    else if(dis == m[l - 1])
		ind[l - 1] = min(c, ind[l - 1]);
	}
	for(int i = 0; i < 3; i++)
	    cout << m[i] << " " << ind[i] << endl;
    }
    return 0;
}
