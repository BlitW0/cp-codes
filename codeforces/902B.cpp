#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const ll MAX = 1e4 + 7;

ll color[MAX], cnt;
vector <ll> G[MAX];

void dfs(ll u, ll c) {
    if(c != color[u])
        cnt++, c = color[u];
    for(ll i = 0; i < G[u].size(); i++)
        dfs(G[u][i], c);
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, buf; cin >> n;
    for(ll i = 2; i <= n; i++)
        cin >> buf, G[buf].pb(i);
    for(ll i = 1; i <= n; i++)
        cin >> color[i];
    dfs(1, 0);
    cout << cnt << '\n';
    return 0;
}