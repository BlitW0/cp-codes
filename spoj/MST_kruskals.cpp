#include <bits/stdc++.h>
using namespace std;
#define MAX 100007
#define mp make_pair
#define pb push_back
typedef long long ll;

vector < pair < ll, pair <ll, ll> > > E;
ll id[MAX];

void init(ll n) {
    for(ll i = 1; i <= n; i++)
        id[i] = i;
}

ll find(ll x) {
    while(id[x] != x) {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

ll kruskal(ll m) {
    sort(E.begin(), E.end());
    ll ans = 0;
    for(ll i = 0; i < m; i++) {
        pair <ll, ll> tmp = E[i].second;
        ll roota = find(tmp.first), rootb = find(tmp.second);
        if(roota == rootb)
            continue;
        else {
            id[rootb] = roota;
            ans += E[i].first;
        }
    }
    return ans;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, m;
    cin >> n >> m;
    init(n);
    for(ll i = 0; i < m; i++) {
        ll a, b, w;
        cin >> a >> b >> w;
        E.pb(mp(w, mp(a, b)));
    }
    ll ans = kruskal(m);
    cout << ans << '\n';
    return 0;
}