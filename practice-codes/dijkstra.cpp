#include <bits/stdc++.h>
using namespace std;
#define MAX 100007
#define pb push_back
#define mp make_pair
#define vp vector < pair <ll, ll> >
#define pll pair <ll, ll>
typedef long long ll;
const ll INF = 1e17;

vp G[MAX];
map <ll, ll> par, ans;
priority_queue < pll, vp, greater < pll > > pq;
bool done[MAX];

void dijkstra_heap(ll src, ll n) {
    for (ll i = 1; i <= n; i++)
        ans[i] = INF;
    ans[src] = 0, pq.push(mp(ans[src], src));
    par[src] = 0;
    while (!pq.empty()) {
        pll min = pq.top();
        pq.pop();
        if (done[min.second])
            continue;
        ll u = min.second; done[u] = 1;
        for (ll i = 0; i < G[u].size(); i++) {
            ll v = G[u][i].first, w = G[u][i].second;
            if (ans[u] + w < ans[v]) {
                par[v] = u, ans[v] = ans[u] + w;
                pq.push(mp(ans[v], v));
            }
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, m; cin >> n >> m;
    for (ll i = 0; i < m; i++) {
        ll u, v, w; cin >> u >> v >> w;
        G[u].pb(mp(v, w));
        G[v].pb(mp(u, w));
    }
    dijkstra_heap(1, n);
    if (ans[n] == INF) {
        cout << -1 << '\n';
        return 0;
    }
    stack <ll> path; ll root = par[n];
    path.push(n);
    while (root) {
        path.push(root);
        root = par[root];
    }
    while (!path.empty())
        cout << path.top() << ' ', path.pop();
    cout << '\n';
    return 0;
}