#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 1e3 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n; cin >> n;
    ll adj[MAXN] = {0};
    for(ll i = 0; i < n - 1; i++) {
        ll u, v; cin >> u >> v;
        adj[u]++, adj[v]++;
    }
    ll ans = 0;
    for(ll i = 1; i <= n; i++)
        if(adj[i] == 1)
            ans++;
    cout << ans << '\n';
    return 0;
}