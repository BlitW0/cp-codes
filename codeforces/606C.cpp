#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN = 2 * 1e5 + 7, MOD = 1e9 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, a[MAXN], dp[MAXN]; cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
        dp[a[i]] = dp[a[i] - 1] + 1, ans = max(ans, dp[a[i]]);
    cout << n - ans << '\n';
    return 0;
}