#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

ll id[26];

void init() {
    for( ll i = 0; i < 26; ++i )
        id[i] = i;
}

ll find( ll x ) {
    while( x != id[x] )
        id[x] = id[id[x]], x = id[x];
    return x;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n; cin >> n;
    string x, y; cin >> x >> y;
    vector < pair < char, char > > ans;
    init();
    for( ll i = 0; i < n; ++i ) {
        ll a = find( x[i] - 'a' ), b = find( y[i] - 'a' );
        if( a != b )
            ans.pb( mp( x[i], y[i] ) ), id[b] = a;
    }
    cout << ans.size() << '\n';
    for( auto p : ans )
        cout << p.first << ' ' << p.second << '\n';
    return 0;
}