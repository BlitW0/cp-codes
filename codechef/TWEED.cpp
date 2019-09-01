#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n; string st;
	cin >> n >> st;
	int even = 0, odd = 0, buf;
	for(int i = 0; i < n; i++)
	    cin >> buf, (buf%2 == 0) ? even++ : odd++;
	if(st == "Dee") {
	    if(!even)
		cout << "Dum";
	    else {
		if(!odd) {
		    if(even == 1) cout << "Dee";
		    else cout << "Dum";
		} else
		    cout << "Dum";
	    }
	} else
	    cout << "Dum";
	cout << '\n';
    }
    return 0;
}
