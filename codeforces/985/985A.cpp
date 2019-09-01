#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN2 = 1e2 + 7;
const ll MAXN3 = 1e3 + 7;
const ll MAXN4 = 1e4 + 7;
const ll MAXN5 = 1e5 + 7;
const ll mod = 1e9 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, inp[MAXN2]; cin >> n;
    for (ll i = 1; i <= n / 2; i++)
        cin >> inp[i];
    
    ll ans = 1e18;
    sort(inp + 1, inp + 1 + n / 2);
    for (ll j = 0; j < 2; j++) {
        ll cnt = 0;
        for (ll i = 1; i <= n / 2; i++)
            cnt += abs(inp[i] - (2 * i - j));
        ans = min(cnt, ans);
    }

    cout << ans << '\n';
    return 0;
}
