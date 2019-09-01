#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n, k; cin >> n >> k;
	long long sum = 0, buf;
	for(int i = 0; i < n; i++) {
	    cin >> buf;
	    sum += buf;
	}
	if(sum&1)
	    cout << "even\n";
	else {
	    if(k > 1) cout << "even\n";
	    else cout << "odd\n";
	}
    }
    return 0;
}
