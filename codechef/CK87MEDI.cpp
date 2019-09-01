#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	int n, k; cin >> n >> k;
	int a[n + 1];
	for(int i = 0; i < n; i++)
	    cin >> a[i];
	sort(a, a + n);
	cout << a[(n + k) / 2] << '\n';
    }
    return 0;
}
