#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    ll n, m; cin >> n >> m;
    ll cnt[1007] = {0}, buf;
    for(ll i = 0; i < m; i++)
        cin >> buf, cnt[buf]++;
    ll ans = 1007;
    for(ll i = 1; i <= n; i++)
        ans = min(ans, cnt[i]);
    cout << ans << '\n';
    return 0;
}