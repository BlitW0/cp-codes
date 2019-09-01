#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll q;
    cin >> q;

    while (q--) {
        ll n, m;
        cin >> n >> m;

        vector < vector <ll> > g(n + 1);
        for (ll i = 0; i < m; i++) {
            ll u, v;
            cin >> u >> v;
            g[u].push_back(v), g[v].push_back(u);
        }

        ll s;
        cin >> s;

        vector <ll> d(n + 1, LLONG_MAX);
        vector <bool> vis(n + 1, 0);

        queue <ll> q;
        d[s] = 0, vis[s] = 1;
        q.push(s);

        while (!q.empty()) {
            ll f = q.front();
            for (auto x : g[f]) {
                if (!vis[x]) {
                    vis[x] = 1;
                    d[x] = min(d[x], d[f] + 1);
                    q.push(x);
                }
            }
            q.pop();
        }

        for (ll i = 1; i <= n; i++)
            (d[i] == LLONG_MAX) ? cout << -1 << ' ' : cout << d[i]*6 << ' ';
        cout << '\n';
    }
    return 0;
}
