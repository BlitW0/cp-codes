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

pll inp[2 * MAXN5];
ll val[2 * MAXN5];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, k; cin >> n >> k;
    for (ll i = 0; i < n; i++)
        cin >> val[i], inp[i].first = val[i];
    
    sort(val, val + n);
    for (ll i = 0; i < n; i++)
        inp[i].second = lower_bound(val, val + n, inp[i].first) - val;

    while (k--) {
        ll a, b; cin >> a >> b;
        a--, b--;
        if (inp[a].first > inp[b].first) inp[a].second--;
        else if(inp[a].first < inp[b].first) inp[b].second--;
    }

    for (ll i = 0; i < n; i++)
        cout << inp[i].second << ' ';
    cout << '\n';
    return 0;
}