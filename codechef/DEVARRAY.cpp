#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, q; cin >> n >> q;
    int r = -1, l = INT_MAX, buf;
    for(int i = 0; i < n; i++)
	cin >> buf, l = min(l, buf), r = max(r, buf);
    while(q--) {
	int t; cin >> t;
	(t >= l && t <= r) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}
