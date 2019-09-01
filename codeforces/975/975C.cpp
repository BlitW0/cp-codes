#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

ll a[2 * MAXN];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, q; cin >> n >> q;
    for (ll i = 1; i <= n; i++)
        cin >> a[i], a[i] += a[i - 1];
    
    ll ad = 0;
    while (q--) {
        ll ser; cin >> ser;
        if (ad >= a[n]) ad = 0;
        ll lo = 1, hi = n, mid;
        while (lo <= hi) {
            mid = (lo + hi) >> 1;
            if (a[mid] - ad <= ser) lo = mid + 1;
            else hi = mid - 1;
        }
        if (lo == n + 1) cout << n << '\n';
        else cout << (n + 1) - lo << '\n';
        ad += ser;
    }
    return 0;
}