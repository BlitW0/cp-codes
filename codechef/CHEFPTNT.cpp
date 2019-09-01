#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
	int n, m, x, k;
	cin >> n >> m >> x >> k;
	string s; cin >> s;
	int mod[2] = {0};
	for(int i = 0; i < s.length(); i++)
	{
	    if(s[i] == 'E') mod[0]++;
	    else mod[1]++;
	}
	int ok = 0;
	for(int i = 1; i <= m; i++)
	{
	    if(i&1)
	    {
		if(x < mod[1])
		{
		    mod[1] -= x;
		    n = max(0, n - x);
		}
		else
		{
		    n = max(0, n - mod[1]);
		    mod[1] = 0;
		}
	    }
	    else
	    {
		if(x < mod[0])
		{
		    mod[0] -= x;
		    n = max(0, n - x);
		}
		else
		{
		    n = max(0, n - mod[0]);
		    mod[0] = 0;
		}
	    }
	    if(!n) { ok = 1; break; }
	    else { if(!mod[1] && !mod[0]) break; }
	}
	if(ok) cout << "yes\n";
	else cout << "no\n";
    }
    return 0;
}
