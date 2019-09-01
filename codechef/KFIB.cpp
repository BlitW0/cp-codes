#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll m = 1e9 + 7;

ll dp[200007];

int main()
{
    ll n, k;
    cin >> n >> k;
    ll sum = k;
    for(ll i = 1; i <= n; i++) {
	if(i <= k) dp[i] = 1;
	else dp[i] = sum, sum = ((2*sum)%m - dp[i - k])%m;
    }
    cout << dp[n] << '\n';
    return 0;
}
