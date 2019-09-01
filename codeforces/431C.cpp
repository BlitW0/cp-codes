#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
const ll mod = 1e9 + 7;

ll d, dp[105][2];

ll rec(ll b, ll n, ll k) {
    if (dp[n][b] != -1)
        return dp[n][b];
    if (n == 0) {
        if (b) return 1ll;
        else return 0ll;
    } else {
        dp[n][b] = 0;
        for (ll i = 1; i <= k; i++)
            if (i <= n) {
                ll tmp;
                if (i >= d) tmp = rec(1, n - i, k);
                else tmp = rec(b, n - i, k);
                // cout << '(' << i << ", " << n - i << ") -> " << tmp << '\n';
                dp[n][b] = (dp[n][b] + tmp) % mod;
            }
        return dp[n][b];
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    ll n, k;
    cin >> n >> k >> d;

    memset(dp, -1, sizeof dp);

    cout << rec(0, n, k) << '\n';
    return 0;
}
