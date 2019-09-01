#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, buf; cin >> n;
    bool par[100007] = {0};
    for(int i = 0; i < n; i++)
	cin >> buf, par[buf] = 1;
    for(int i = 0; i <= n; i++)
	if(!par[i])
	    cout << i << ' ';
    cout << '\n';
    return 0;
}
