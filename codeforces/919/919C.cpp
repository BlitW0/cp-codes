#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    char s[2007][2007];
    for(int i = 0; i < n; i++)
	cin >> s[i];
    int cnt = 0; long long ans = 0;
    if(k == 1)
    {
	for(int i = 0; i < n; i++)
	    for(int j = 0; j < m; j++)
		if(s[i][j] == '.')
		    ans++;
	cout << ans << endl;
	return 0;
    }
    for(int i = 0; i < n; i++)
    {
	int cnt = 0;
	for(int j = 0; j < k; j++)
	    if(s[i][j] == '.')
		cnt++;
	if(cnt == k) ans++;
	for(int j = k; j < m; j++)
	{
	    if(s[i][j - k] == '.') cnt--;
	    if(s[i][j] == '.') cnt++;
	    if(cnt == k) ans++;
	}
    }
    for(int i = 0; i < m; i++)
    {
	int cnt = 0;
	for(int j = 0; j < k; j++)
	    if(s[j][i] == '.')
		cnt++;
	if(cnt == k) ans++;
	for(int j = k; j < n; j++)
	{
	    if(s[j - k][i] == '.') cnt--;
	    if(s[j][i] == '.') cnt++;
	    if(cnt == k) ans++;
	}
    }
    cout << ans << endl;
    return 0;
}
