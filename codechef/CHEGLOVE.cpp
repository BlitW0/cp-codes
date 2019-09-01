#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	int f[n + 1], g[n + 1];
	for(int i = 0; i < n; i++)
	    cin >> f[i];
	bool okf = 1, okb = 1;
	for(int i = 0; i < n; i++) {
	    cin >> g[i];
	    if(g[i] < f[i])
		okf = 0;
	}
	for(int i = 0; i < n; i++)
	    if(g[i] < f[n - i - 1])
		okb = 0;
	if(okf && okb)
	    cout << "both\n";
	else if(okf)
	    cout << "front\n";
	else if(okb)
	    cout << "back\n";
	else
	    cout << "none\n";
    }
    return 0;
}
