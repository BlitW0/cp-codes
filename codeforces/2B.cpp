#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const ll MAXN2 = 1e2 + 7;
const ll MAXN3 = 1e3 + 7;
const ll MAXN4 = 1e4 + 7;
const ll MAXN5 = 1e5 + 7;
const ll mod = 1e9 + 7;

ll dp[MAXN3][MAXN3][2];
char dir[MAXN3][MAXN3][2];
ll inp[MAXN3][MAXN3][2];

ll p(ll k, ll m) {
    ll res = 0;
    for (; k; k /= m) {
        if (k % m == 0) res++;
        else break;
    } return res;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, buf; cin >> n;
    bool zero = 0;
    ll zeroi, zeroj;
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < n; j++) {
            cin >> buf;
            inp[i][j][0] = p(buf, 2), inp[i][j][1] = p(buf, 5);
            if (!buf) zero = 1, zeroi = i, zeroj = j, inp[i][j][0] = inp[i][j][1] = 1;
            dp[i][j][0] = dp[i][j][1] = 1e18;
        }

    dp[0][0][0] = inp[0][0][0], dp[0][0][1] = inp[0][0][1];
    
    for (ll x = 0; x < 2; x++) {

        for (ll i = 1; i < n; i++)
            dp[i][0][x] = inp[i][0][x] + dp[i - 1][0][x], dir[i][0][x] = 'U';
        for (ll j = 1; j < n; j++)
            dp[0][j][x] = inp[0][j][x] + dp[0][j - 1][x], dir[0][j][x] = 'L';
        
        for (ll i = 1; i < n; i++)
            for (ll j = 1; j < n; j++) {
                dp[i][j][x] = min(dp[i - 1][j][x], dp[i][j - 1][x]) + inp[i][j][x];
                if (dp[i - 1][j][x] < dp[i][j - 1][x])
                    dir[i][j][x] = 'U';
                else
                    dir[i][j][x] = 'L';
            }

    }

    ll ans = min(dp[n - 1][n - 1][0], dp[n - 1][n - 1][1]);

    if (zero && ans > 1) {
        cout << 1 << '\n';
        for (ll i = 0; i < zeroi; i++)
            cout << 'D';
        for (ll i = 0; i < n - 1; i++)
            cout << 'R';
        for (ll i = zeroi; i < n - 1; i++)
            cout << 'D';
        return 0;
    }

    cout << ans << '\n';
    stack <char> path;
    ll bit;
    if (dp[n - 1][n - 1][0] < dp[n - 1][n - 1][1]) bit = 0;
    else bit = 1;
        
    for (ll i = n - 1, j = n - 1; !(!i && !j);) {
        if (dir[i][j][bit] == 'L') j--, path.push('R');
        if (dir[i][j][bit] == 'U') i--, path.push('D');
    }
    for (; !path.empty(); path.pop())
        cout << path.top();
    cout << '\n';
    return 0;
}