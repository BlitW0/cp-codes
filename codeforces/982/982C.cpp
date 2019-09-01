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

vector <ll> g[MAXN5];
ll sub[MAXN5];

void dfs(ll u, ll par) {
    sub[u] = 1;
    for (auto v : g[u])
        if (v != par)
            dfs(v, u), sub[u] += sub[v];
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n; cin >> n;
    for (ll i = 0; i < n - 1; i++) {
        ll u, v; cin >> u >> v;
        g[u].pb(v), g[v].pb(u);
    }

    if (n & 1) {
        cout << -1 << '\n';
        return 0;
    }

    dfs(1, 0);

    ll cnt = 0;
    for (ll i = 2; i <= n; i++)
        if (sub[i] % 2 == 0)
            cnt++;

    cout << cnt << '\n';
    return 0;
}