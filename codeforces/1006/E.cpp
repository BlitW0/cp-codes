#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

vector <ll> g[200005], a;
pair <ll, ll> lr[200005];

void dfs(ll u, ll par) {
    lr[u].first = (ll) a.size();
    a.push_back(u);
    for (auto v : g[u])
        if (v != par)
            dfs(v, u);
    lr[u].second = (ll) a.size(); 
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, q;
    cin >> n >> q;

    for (ll i = 2; i <= n; i++) {
        ll j; cin >> j;
        g[i].push_back(j), g[j].push_back(i); 
    }
    dfs(1, 0);

    while (q--) {
        ll u, k;
        cin >> u >> k;

        if (lr[u].first + k - 1 >= lr[u].second)
            cout << -1 << '\n';
        else
            cout << a[lr[u].first + k - 1] << '\n';
    }
    return 0;
}
