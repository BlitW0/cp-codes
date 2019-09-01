#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	int a[n + 1];
	for(int i = 0; i < n; i++)
	    cin >> a[i];
	if(n < 13) {
	    cout << "no\n";
	    continue;
	}
	int ser = 1; bool ok = 1;
	bool done[17] = {0};
	for(int i = 0; i < n/2 + n%2; i++) {
	    if(a[i] == ser && a[n - i - 1] == ser) {
		done[ser] = 1;
		continue;
	    } else {
		if(a[i] == ser + 1 && a[n - i - 1] == ser + 1 && done[ser])
		    ser++, done[ser] = 1;
		else { ok = 0; break; }
	    }
	}
	if(ser != 7) ok = 0;
	(ok) ? cout << "yes\n" : cout << "no\n";
    }
    return 0;
}
