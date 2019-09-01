#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

ll cnt[105];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++) {
        ll buf; cin >> buf;
        cnt[buf]++;
    }

    ll ans = -1;
    for (ll i = 1; i <= 100; i++)
        ans = max(ans, cnt[i]);
    
    cout << ans << '\n';
    return 0;
}
