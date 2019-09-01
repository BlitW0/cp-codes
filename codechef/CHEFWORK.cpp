#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1007;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n; cin >> n;
    ll cost[MAX];
    for(ll i = 0; i < n; i++)
        cin >> cost[i];
    ll t = 1e17, a = 1e17, at = 1e17;
    for(ll i = 0; i < n; i++) {
        ll type; cin >> type;
        if(type == 1) t = min(t, cost[i]);
        else if(type == 2) a = min(a, cost[i]);
        else at = min(at, cost[i]);
    }
    cout << min(a + t, at) << '\n';
    return 0;
}