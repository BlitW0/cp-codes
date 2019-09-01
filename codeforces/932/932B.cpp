#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll n)
{
    ll res = 1;
    while(n > 0) {
	if(n%10 != 0) res *= n%10;
	n /= 10;
    }
    return res;
}

ll dp[1000007] = {0}, ans[1000007][9] = {0};

ll g(ll n)
{
    if(dp[n] != -1) return dp[n];
    if(n < 10) return dp[n] = n;
    else return dp[n] = g(f(n));
}

int main()
{
    ll q; cin >> q;
    for(ll i = 1; i <= 1000001; i++)
	dp[i] = -1;
    for(ll i = 1; i <= 1000001; i++) {
	dp[i] = g(i);
	ans[i][dp[i]] = 1;
    }
    for(ll i = 1; i < 10; i++)
	for(ll j = 2; j <= 1000001; j++)
	    ans[j][i] += ans[j - 1][i];
    while(q--)
    {
	ll l, r, k; cin >> l >> r >> k;
	ll cnt = ans[r][k] - ans[l][k];
	if(dp[l] == k) cnt++;
	cout << cnt << endl;
    }
    return 0;
}
