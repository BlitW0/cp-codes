#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    vector <ll> cnt(100001, 0);
    for (ll i = 0; i < n; i++) {
        ll buf; cin >> buf;
        cnt[buf]++;
    }

    vector <ll> dp(100001, 0);
    dp[1] = cnt[1];
    for (ll i = 2; i <= 100000; i++)
        dp[i] = max(dp[i - 1], dp[i - 2] + i*cnt[i]);
    
    cout << dp.back() << '\n';
    return 0;
}
