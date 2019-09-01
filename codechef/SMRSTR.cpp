#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t; cin >> t;
    while(t--) {
	long long n, q;
	cin >> n >> q;
	long long prod = 1, buf;
	for(int i = 0; i < n; i++)
	    cin >> buf, prod *= buf;
	while(q--) {
	    long long x; cin >> x;
	    (prod == 0) ? cout << 0 : cout << x/prod;
	    cout << ' ';
	}
	cout << '\n';
    }
    return 0;
}
