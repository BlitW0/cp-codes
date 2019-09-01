#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

map < pll, ll> m;
map < ll, ll> f;
pll pt[2 * MAXN];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, a, b; cin >> n >> a >> b;
    for (ll i = 0; i < n; i++) {
        ll x, vx, vy;
        cin >> x >> vx >> vy;
        f[a * vx - vy]++, m[mp(vx, vy)]++;
        pt[i] = mp(vx, vy);
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += f[a * pt[i].first - pt[i].second] - m[mp(pt[i].first, pt[i].second)];
    }

    cout << ans << '\n';
    
    return 0;
}