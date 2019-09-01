#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	map <int, int> m; int buf;
	long long cnt = 0;
	for(int i = 0; i < n; i++) {
	    cin >> buf;
	    m[buf]++;
	    if(m[buf] > 1)
		cnt++;
	}
	cout << cnt << endl;
    }
    return 0;
}
