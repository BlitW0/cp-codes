#include <bits/stdc++.h>
using namespace std;

bool find(int a[])
{
    int dis = 0;
    for(int i = 0; i < 26; i++)
	if(a[i])
	    dis++;
    if(dis == 1) return true;
    else return false;
}

int main()
{
    int n; cin >> n;
    string str; char q;
    int cnt = 0; int a[26];
    for(int i = 0; i < 26; i++)
	a[i] = 1;
    while(n--)
    {
	cin >> q >> str;
	int tmp[26] = {0};
	if(find(a))
	{
	    if(q == '!' || (q == '?' && n != 0))
		cnt++;
	}
	else
	{
	    if(q == '!')
	    {
		for(int i = 0; i < str.length(); i++)
		    tmp[str[i] - 'a']++;
		for(int i = 0; i < 26; i++)
		    if(!tmp[i] && a[i])
			a[i] = 0;
	    }
	    else if(q == '.')
		for(int i = 0; i < str.length(); i++)
		    a[str[i] - 'a'] = 0;
	    else
		a[str[0] - 'a'] = 0;
	}
    }
    cout << cnt << endl;
    return 0;
}
