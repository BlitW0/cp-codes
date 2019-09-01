#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
const ll mod = 1e9 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, k;
    cin >> n >> k;

    vector <ll> dp(100005, 0);
    for (ll i = 0; i <= 100000; i++) {
        if (i < k) dp[i] = 1;
        else dp[i] = (dp[i - 1] + dp[i - k]) % mod;
    }

    vector <ll> pre(dp.begin(), dp.end());
    for (ll i = 1; i <= 100000; i++)
        pre[i] = (pre[i] + pre[i - 1]) % mod;
    
    while (n--) {
        ll a, b;
        cin >> a >> b;

        cout << (pre[b] - pre[a - 1] + mod) % mod << '\n';
    }
    return 0;
}
