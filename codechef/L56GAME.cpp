#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
	int n; cin >> n;
	int buf, odd = 0;
	for(int i = 0; i < n; i++)
	{
	    cin >> buf;
	    if(buf&1) odd++; 
	}
	if(odd&1 && n != 1) cout << 2 << endl;
	else cout << 1 << endl;
    }
    return 0;
}
