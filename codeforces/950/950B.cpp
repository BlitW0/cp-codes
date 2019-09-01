#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main()
{
    int n, m;
    cin >> n >> m;

    vector <int> a, b;
    int buf;
    for(int i = 0; i < n; i++)
	cin >> buf, a.pb(buf);
    for(int i = 0; i < m; i++)
	cin >> buf, b.pb(buf);

    int ans = 0;
    int cura = a[0], curb = b[0];
    for(int i = 1, j = 1; i <= n && j <= m; ) {
	if(cura == curb)
	    ans++, cura = a[i++], curb = b[j++];
	else if(cura < curb)
	    cura += a[i++];
	else
	    curb += b[j++];
    }

    cout << ans << '\n';
    return 0;
}
