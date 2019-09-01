#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n, u, d, buf;
	cin >> n >> u >> d;
	int h[n + 1];
	for(int i = 0; i < n; i++)
	    cin >> h[i];
	bool ok = 1, lower = 0;
	for(int i = 0; i < n; i++) {
	    if(h[i] == h[i + 1])
		continue;
	    else if(h[i] < h[i + 1]) {
		if(h[i + 1] - h[i] > u) {
		    cout << i + 1;
		    ok = 0; break;
		}
	    } else {
		if(h[i] - h[i + 1] > d) {
		    if(!lower)
			lower = 1;
		    else {
			cout << i + 1;
			ok = 0; break;
		    }
		}
	    }
	}
	if(ok) cout << n;
	cout << '\n';
    }
    return 0;
}
