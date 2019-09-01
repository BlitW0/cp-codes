#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main()
{
    int t; cin >> t;
    while(t--)
    {
	int x, y; cin >> x >> y;
	int ans[17];
	int a = max(x, y), b = min(x, y), i;
	for(i = 0; b != 0; i++) {
	    ans[i] = (a%10 + b%10)%10;
	    a /= 10; b /= 10;
	}
	while(a != 0) {
	    ans[i++] = a%10;
	    a /= 10;
	}
	int j = i - 1;
	while(ans[j] == 0) j--;
	if(j == -1) {
	    cout << 0 << endl;
	    continue;
	}
	for(int k = j; k >= 0; k--)
	    cout << ans[k];
	cout << endl;
    }
    return 0;
}
