#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

vector <ll> tree[2 * MAXN], g[MAXN], euler;
pll sub[MAXN]; bool vis[MAXN];
ll n, par[MAXN][18], dist[MAXN];

void dfs(ll u) {
    vis[u] = 1, euler.pb(dist[u]);
    sub[u].first = euler.size() - 1;
    for (auto v : g[u])
        if (!vis[v])
            dist[v] = dist[u] + 1, dfs(v);
    sub[u].second = euler.size() - 1;
}

void build() {
    for (ll i = 0; i < n; i++)
        tree[i + n].pb(euler[i]);
    for (ll i = n - 1; i > 0; i--) {
        ll lc = (i << 1), rc = (i << 1 | 1);
        merge(tree[lc].begin(), tree[lc].end(), tree[rc].begin(), tree[rc].end(), back_inserter(tree[i]));
    }
}

ll query(ll l, ll r, ll x) {
    ll cnt = 0;
    for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
        if (l & 1) {
            cnt += upper_bound(tree[l].begin(), tree[l].end(), x) - lower_bound(tree[l].begin(), tree[l].end(), x);
            l++;
        }
        if (r & 1) {
            --r;
            cnt += upper_bound(tree[r].begin(), tree[r].end(), x) - lower_bound(tree[r].begin(), tree[r].end(), x);
        }
    }
    return cnt;
}

ll getpar(ll u, ll d) {
    for(ll bit = 0; d; d >>= 1, bit++)
        if (d & 1)
            u = par[u][bit];
    return u;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;
    for (ll i = 1; i <= n; i++) {
        ll p; cin >> p;
        if (p) g[i].pb(p), g[p].pb(i);
        par[i][0] = p;
    }

    for (ll i = 1; i <= n; i++)
        if (!vis[i])
            dfs(i);
    
    build();
    
    ll lgn, d = n;
    for (lgn = 0; d; d >>= 1, lgn++);
    for (ll i = 1; i < lgn; i++)
        for (ll j = 1; j <= n; j++)
            par[j][i] = par[par[j][i - 1]][i - 1];
    
    ll m; cin >> m;
    while (m--) {
        ll v, p; cin >> v >> p;
        if (dist[v] - p < 0)
            cout << 0 << ' ';
        else {
            ll u = getpar(v, p);
            cout << query(sub[u].first, sub[u].second + 1, dist[v]) - 1 << ' ';
        }
    }
    cout << '\n';

    return 0;
}