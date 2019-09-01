#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[1507];
    for(int i = 0; i < n; i++)
	cin >> a[i];
    int odd, cnt = 0;
    for(int i = 0; i < n - 1; i++)
	for(int j = i + 1; j < n; j++)
	    if(a[j] < a[i])
		cnt++;
    odd = cnt&1;
    int m, l, r; cin >> m;
    for(int i = 0; i < m; i++)
    {
	cin >> l >> r;
	if((((r - l)*(r - l + 1))/2)%2)
	    odd++;
	if(odd&1) cout << "odd\n";
	else cout << "even\n";
    }
    return 0;
}
