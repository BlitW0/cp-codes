#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	int buf, ans = 0;
	for(int i = 0; i < n; i++)
	    cin >> buf, ans |= buf;
	cout << ans << endl;
    }
    return 0;
}
