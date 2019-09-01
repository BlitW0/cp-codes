#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 100007

int main()
{
    ll n, maxdepth = -1, ans = 0; cin >> n;
    ll applelevel[MAX], levelhash[MAX] = {0};
    applelevel[1] = 0, levelhash[0] = 1;
    for(ll i = 2; i <= n; i++) {
	ll u; cin >> u;
	applelevel[i] = applelevel[u] + 1;
	maxdepth = max(maxdepth, applelevel[i]);
	levelhash[applelevel[i]]++;
    }
    for(ll i = 0; i <= maxdepth; i++)
	ans += levelhash[i]%2;
    cout << ans << endl;
    return 0;
}
