#include <bits/stdc++.h>
using namespace std;
typedef double ld;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll sum = 0;
        for( ll i = 0, buf; i < n; ++i )
            cin >> buf, sum += buf;
        ( sum & 1 ) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}