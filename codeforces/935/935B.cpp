#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    if(s.length() <= 2)
    {
	cout << 0 << endl;
	return 0;
    }
    int cnt = 0, x = 0, y = 0;
    int prevx = 0, prevy = 0;
    (s[0] == 'U') ? y++ : x++;
    (s[1] == 'U') ? y++ : x++;
    for(int i = 2; i < s.length(); i++)
    {
	(s[i] == 'U') ? y++ : x++;
	(s[i - 2] == 'U') ? prevy++ : prevx++;
	if((prevy > prevx && y < x) || (prevy < prevx && y > x))
	    cnt++;
    }
    cout << cnt << endl;
    return 0;
}
