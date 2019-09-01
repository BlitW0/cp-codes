#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

ll dp[5005][5005][2]; 

ll f(ll i, ll j, ll ind, string s[]) {
    ll ret = LLONG_MAX;
    if (dp[i][j][ind] != -1)
        return dp[i][j][ind];
    if (i + j == s[0].length() + s[1].length())
        return 0;
    
    char prev;
    if (ind == 0) prev = s[0][i - 1];
    else prev = s[1][j - 1];
    
    if (i < s[0].length())
        ret = min(ret, (ll) (s[0][i] != prev) + f(i + 1, j, 0, s));
    if (j < s[1].length())
        ret = min(ret, (ll) (s[1][j] != prev) + f(i, j + 1, 1, s));
    
    return dp[i][j][ind] = ret;
}
 
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
 
    ll t;
    cin >> t;
 
    while (t--) {
        ll n, m;
        cin >> n >> m;
 
        string s[2];
        cin >> s[0] >> s[1];
 
        memset(dp, -1, sizeof dp);
        cout << 1 + min(f(1, 0, 0, s), f(0, 1, 1, s)) << '\n';
    }
    return 0;
}