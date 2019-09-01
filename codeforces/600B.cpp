#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n, m; cin >> n >> m;
    vector < ll > a, b;
    for( ll i = 0, buf; i < n; ++i )
        cin >> buf, a.pb( buf );
    for( ll i = 0, buf; i < m; ++i )
        cin >> buf, b.pb( buf );
    sort( a.begin(), a.end() );
    for( ll i = 0; i < m; ++i )
        cout << upper_bound( a.begin(), a.end(), b[i] ) - a.begin() << ' ';
    cout << '\n';
    return 0;
}