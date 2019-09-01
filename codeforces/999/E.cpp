#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 5005;

vector <ll> g[MAXN];
vector < pair <ll, ll> > unre;
bool mark[MAXN], vis[MAXN];
ll cnt;

void dfs(ll u) {
    mark[u] = 1;
    for (auto x : g[u])
        if (!mark[x])
            dfs(x);
}

void dfs1(ll u) {
    vis[u] = 1;
    cnt++;
    for (auto x : g[u])
        if (!vis[x] && !mark[x])
            dfs1(x);
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m, s;
    cin >> n >> m >> s;

    for (ll i = 0; i < m; i++) {
        ll u, v; 
        cin >> u >> v;
        g[u].push_back(v);
    }

    dfs(s);
    for (ll i = 1; i <= n; i++)
        if (!mark[i]) {
            cnt = 0;
            memset(vis, 0, sizeof vis);
            dfs1(i);
            unre.push_back(make_pair(cnt, i));
        }
    
    sort(unre.begin(), unre.end());
    reverse(unre.begin(), unre.end());

    ll ans = 0;
    for (ll i = 0; i < unre.size(); i++)
        if (!mark[unre[i].second]) {
            ans++;
            dfs(unre[i].second);
        }

    cout << ans << '\n';
    return 0;
}
