#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	int a[n + 1], mx;
	for(int i = 0; i < n; i++)
	    cin >> a[i];
	if(n%2 == 0)
	    cout << "no\n";
	else {
	    bool ok = 1;
	    int ser = 1, max = (n / 2) + (n % 2);
	    for(int i = 0; i < max; i++) {
		if(a[i] != i + 1 || a[n - i - 1] != i + 1) {
		    ok = 0;
		    break;
		}
	    }
	    (ok) ? cout << "yes\n" : cout << "no\n";
	}
    }
    return 0;
}
