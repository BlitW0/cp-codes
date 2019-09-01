#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	int n, buf; cin >> n;
	int a[1007] = {0};
	for(int i = 0; i < n; i++)
	    cin >> buf, a[buf]++;
	int ans = -1, i, j;
	for(i = 1000; i >= 1 && a[i] < 2; i--);
	if(a[i] >= 4)
	    ans = i*i;
	else {
	    for(j = i - 1; j >= 1 && a[j] < 2; j--);
	    if(j != 0) ans = i*j;
	}
	cout << ans << '\n';
    }
    return 0;
}
