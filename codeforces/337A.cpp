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

    ll n, m; cin >> n >> m;
    vector <ll> inp(m);
    for (ll i = 0; i < m; i++)
        cin >> inp[i];
    
    sort(inp.begin(), inp.end());
    ll mn = 1e18;
    for (ll i = 0; i + n - 1 < m; i++)
        mn = min(mn, inp[i + n - 1] - inp[i]);
    
    cout << mn << '\n';
    return 0;
}