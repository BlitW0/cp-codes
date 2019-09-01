#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, k; cin >> n >> k;
    char field[107][107];
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < n; j++)
            cin >> field[i][j];

    ll poss[107][107];
    memset(poss, 0, sizeof(poss));
    
    for (ll i = 0; i < n; i++) {
        ll j = 0;
        while (j < n) {
            ll p = j;
            while (field[i][p] == '.') p++;
            if (p - j >= k) {
                for (ll x = j; x < p - k + 1; x++)
                    for (ll y = x; y < x + k; y++)
                        poss[i][y]++;
            }
            j = p + 1;
        }
    }

    for (ll j = 0; j < n; j++) {
        ll i = 0;
        while (i < n) {
            ll p = i;
            while (field[p][j] == '.') p++;
            if (p - i >= k) {
                for (ll x = i; x < p - k + 1; x++)
                    for (ll y = x; y < x + k; y++)
                        poss[y][j]++;
            }
            i = p + 1;
        }
    }

    pll ans; ll mx = -1;
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < n; j++)
            if (poss[i][j] > mx)
                mx = poss[i][j], ans = mp(i + 1, j + 1);
    
    cout << ans.first << ' ' << ans.second << '\n';
    return 0;
}