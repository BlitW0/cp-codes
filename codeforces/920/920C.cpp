#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[200007];
    for(int i = 0; i < n; i++)
	cin >> a[i];
    string s; cin >> s;
    for(int i = 0; i < n - 1; )
    {
	int j = i;
	while(s[j] == '1') j++;
	// cout << i << " " << j << endl;
	if(j == i) i++;
	else
	{
	    sort(a + i, a + j + 1);
	    i = j + 1;
	}
    }
    int ok = 1;
    for(int i = 0; i < n; i++)
	if(a[i] != i + 1) {
	    ok = 0; break; }
    (ok)?(cout << "YES\n"):(cout << "NO\n");
    return 0;
}
