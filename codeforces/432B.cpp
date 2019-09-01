#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

ll x[MAXN], y[MAXN], a[MAXN];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n; cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> x[i] >> y[i], a[x[i]]++;
    
    for (ll i = 0; i < n; i++)
        cout << (n - 1) + a[y[i]] << ' ' << (n - 1) - a[y[i]] << '\n';
    return 0;
}