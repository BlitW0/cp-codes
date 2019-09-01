#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m; cin >> n >> m;
    ll a[107];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    
    ll cnt = 0;
    for (ll i = 0; i < n; ) {
        ll sum = 0, j;
        for (j = i; sum <= m && j <= n; j++)
            sum += a[j];
        i = j - 1, cnt++;
    }
    cout << cnt << '\n';
    return 0;
}