#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[5007];
    for(int i = 1; i <= n; i++)
	cin >> a[i];
    int ok = 0;
    for(int i = 1; i <= n; i++)
	if(a[a[a[i]]] == i)
	    ok = 1;
    (ok == 1) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}