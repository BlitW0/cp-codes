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

ll inp[MAXN3];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, w; cin >> n >> w;
    for (ll i = 1; i <= n; i++)
        cin >> inp[i];

    ll mx = -1e6 - 7, mn = 1e6 + 7, sum = 0;
    for (ll i = 0; i <= n; i++)
        sum += inp[i], mn = min(mn, sum), mx = max(mx, sum);
    
    cout << max(0ll, (w - mx) + mn + 1) << '\n';
    return 0;
}