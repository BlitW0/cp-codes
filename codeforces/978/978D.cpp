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

ll inp[MAXN5];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n; cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> inp[i];

    ll ans = 1e18;
    for (ll p = -1; p <= 1; p++)
        for (ll q = -1; q <= 1; q++) {
            ll a1 = inp[0] + p, a2 = inp[1] + q;
            ll d = a2 - a1, cnt = abs(p) + abs(q);
            bool ok = 1;
            for (ll i = 2; i < n; i++) {
                ll diff = abs(inp[i] - (a1 + i * d));
                if (diff > 1) {
                    ok = 0;
                    break;
                } else cnt += diff;
            }
            if (ok) ans = min(ans, cnt);
        }

    (ans == 1e18) ? cout << -1 : cout << ans;
    cout << '\n';
    return 0;
}