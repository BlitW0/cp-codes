#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
	string s; cin >> s;
	int cnt = 0;
	for(int i = 0; i < s.length(); i++)
	{
	    int p[4] = {0};
	    for(int j = i; j < i + 4; j++)
	    {
		if(s[j] == 'c') p[0] = 1;
		else if(s[j] == 'h') p[1] = 1;
		else if(s[j] == 'e') p[2] = 1;
		else if(s[j] == 'f') p[3] = 1;
	    }
	    int pre = 1;
	    for(int j = 0; j < 4; j++)
		if(!p[j])
		    pre = 0;
	    if(pre) cnt++;
	}
	if(!cnt) cout << "normal\n";
	else cout << "lovely " << cnt << endl;
    }
    return 0;
}
