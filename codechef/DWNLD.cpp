#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	int n, k; cin >> n >> k;
	int price = 0, t, d;
	for(int i = 0; i < n; i++) {
	    cin >> t >> d;
	    if(k >= t) { k -= t; continue; }
	    else t -= k, k = 0;
	    price += t*d;
	}
	cout << price << '\n';
    }
    return 0;
}
