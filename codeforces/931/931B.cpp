#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y; cin >> n >> x >> y;
    int a = min(x, y), b = max(x, y);
    int s1 = a/2 + a%2, s2 = b/2 + b%2;
    int cnt = 1;
    while(n > 2) {
	if(s1 == s2) {
	    cout << cnt << endl;
	    return 0;
	}
	s1 = s1/2 + s1%2;
	s2 = s2/2 + s2%2;
	n >>= 1;
	cnt++;
    }
    cout << "Final!\n";
    return 0;
}
