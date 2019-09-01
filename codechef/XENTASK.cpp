#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	int x[n + 1], y[n + 1];
	for(int i = 0; i < n; i++)
	    cin >> x[i];
	for(int i = 0; i < n; i++)
	    cin >> y[i];

	int xs = 0, ys = 0;
	for(int i = 0; i < n; i++) {
	    if(i%2 == 0) xs += x[i], ys += y[i];
	    else xs += y[i], ys += x[i];
	}

	cout << min(xs, ys) << '\n';
    }
    return 0;
}
