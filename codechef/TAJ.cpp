#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
const ll N = 1e6 + 5;

vector <ll> g[N];
ll pre[N];

void dfs(ll u, ll par) {
    pre[u] ^= pre[par];
    for (auto v : g[u])
        if (v != par)
            dfs(v, u);
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    for (ll i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        g[u].push_back(v), g[v].push_back(u);
    }

    for (ll i = 1; i <= n; i++)
        cin >> pre[i];
    
    pre[0] = 0;
    dfs(1, 0);

    ll q;
    cin >> q;

    while (q--) {
        ll u, v;
        cin >> u >> v;
        cout << (pre[u] ^ pre[v]) << '\n';
    }
    return 0;
}
