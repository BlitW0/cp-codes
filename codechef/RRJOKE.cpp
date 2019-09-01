#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	int x, y;
	for(int i = 0; i < n; i++)
	    cin >> x >> y;
	int ans = 1;
	for(int i = 2; i <= n; i++)
	    ans ^= i;
	cout << ans << '\n';
    }
    return 0;
}
