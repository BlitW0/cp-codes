#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++)
	cin >> a[i];
    sort(a, a + n);
    int ok = 0;
    for(int i = 1; i < n - 1; i++)
	if(a[i - 1] + a[i] > a[i + 1]) {
	    ok = 1; break; }
    if(!ok) printf("NO\n");
    else printf("YES\n");
    return 0;
}
