#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 1e5 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n, p; cin >> n >> p;
    ll a[MAXN];
    for(ll i = 1; i <= n; i++)
        cin >> a[i], a[i] += a[i - 1];
    ll ans = -1;
    for(ll i = 1; i <= n - 1; i++)
        ans = max(ans, a[i] % p + (a[n] - a[i]) % p);
    cout << ans << '\n';
    return 0;
}