#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll C[37][37];

int main() {

    ll n, m, t;
    cin >> n >> m >> t;

    for(ll i = 1; i <= 30; i++)
	C[i][0] = C[i][i] = 1;

    for(ll i = 1; i < 30; i++)
	for(ll j = 1; j <= i; j++)
	    C[i + 1][j] = C[i][j] + C[i][j - 1];

    ll ans = 0;
    for(ll i = 4; i < t; i++)
	if(t - i <= m && i <= n)
	    ans += C[n][i]*C[m][t - i];

    cout << ans << '\n';
    return 0;
}
