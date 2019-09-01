#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
	int a[30] = {0};
	for(int i = 0; i < 30; i++)
	    cin >> a[i];
	int max = 0, i = 0, j, ok = 1;
	while(i < 30)
	{
	    j = i;
	    while(a[j] == 1) j++;
	    if(i == j) i++;
	    else { if(j - i > max) max = j - i; i = j; }
	    if(max > 5) { ok = 0; break; }
	}
	if(ok) cout << "#allcodersarefun\n";
	else cout << "#coderlifematters\n";
    }
    return 0;
}
