#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
	long long n; cin >> n;
	long long m = 1e6, buf;
	for(long long i = 0; i < n; i++) {
	    cin >> buf;
	    m = min(m, buf);
	}
	cout << m*(n - 1) << endl;
    }
    return 0;
}
