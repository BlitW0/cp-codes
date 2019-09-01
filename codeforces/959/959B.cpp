#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1e5 + 7;

ll cost[MAX], root[MAX], mincos[MAX];
map <string, ll> pos;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, k, m; cin >> n >> k >> m;
    string buf;
    for(ll i = 0; i < n; i++)
        cin >> buf, pos[buf] = i;
    for(ll i = 0; i < n; i++)
        cin >> cost[i];
    for(ll i = 0; i < k; i++) {
        ll len, tmp; cin >> len;
        mincos[i] = 1e18;
        while(len--) {
            cin >> tmp; root[tmp - 1] = i;
            mincos[i] = min(mincos[i], cost[tmp - 1]);
        }
    }
    ll ans = 0;
    for(ll i = 0; i < m; i++) {
        string s; cin >> s;
        ans += mincos[root[pos[s]]];
    }
    cout << ans << '\n';
    return 0;
}