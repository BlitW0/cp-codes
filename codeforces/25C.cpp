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

    ll d[307][307], n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
        for (ll j = 1; j <= n; j++)
            cin >> d[i][j];
    
    ll k; cin >> k;
    while (k--) {
        ll a, b, c;
        cin >> a >> b >> c;

        ll sum = 0;
        for (ll i = 1; i <= n; i++)
            d[a][i] = min(d[a][i], c + d[b][i]), d[i][a] = d[a][i];
        for (ll i = 1; i <= n; i++)
            d[b][i] = min(d[b][i], c + d[a][i]), d[i][b] = d[b][i];
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= n; j++)
                d[i][j] = min(d[i][j], min(d[i][a] + d[a][j], d[i][b] + d[b][j]));
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= i; j++)
                sum += d[i][j]
        
        cout << sum << ' ';
    }
    cout << '\n';
    return 0;
}