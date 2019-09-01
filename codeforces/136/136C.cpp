#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 1e5 + 7;

ll a[MAXN];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n; cin >> n; ll mx = -1;
    for(ll i = 0; i < n; i++) cin >> a[i], mx = max(mx, a[i]);
    bool ok = 1;
    if(mx != 1) {
        sort(a, a + n);
        cout << 1 << ' ';
        for(ll i = 0; i < n - 1; i++) cout << a[i] << ' ';
        cout << '\n';
    } else {
        for(ll i = 0; i < n - 1; i++) cout << a[i] << ' ';
        cout << 2 << '\n';
    }
    return 0;
}