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

ll pref[2 * MAXN5];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m; cin >> n >> m;
    for (ll i = 1; i <= n; i++)
        cin >> pref[i], pref[i] += pref[i - 1];
    
    while (m--) {
        ll ser; cin >> ser;
        auto it = lower_bound(pref + 1, pref + n + 1, ser);
        cout << it - pref + 1 << ' ' << ser - *(--it) << '\n';
    }
    return 0;
}