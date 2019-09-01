#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	double n; cin >> n;
	double sum = 0, buf;
	bool five = 0, fail = 0;
	for(int i = 0; i < n; i++) {
	    cin >> buf, sum += buf;
	    if(buf == 5) five = 1;
	    if(buf == 2) fail = 1;
	}
	(sum/n >= 4.0 && five && !fail) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}
