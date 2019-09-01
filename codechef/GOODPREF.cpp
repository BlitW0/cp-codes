#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t; cin >> t;
    while(t--) {
        ll n; string s;
        cin >> s >> n; ll cnt[2] = {0};
        for(ll i = 0; i < s.length(); i++)
            cnt[s[i] - 'a']++;
        ll pc[2] = {0}, ans = 0;
        ll diff = cnt[0] - cnt[1];
        for(ll i = 0; i < s.length(); i++) {
            pc[s[i] - 'a']++;
            ll pcdiff = pc[0] - pc[1];
            ll x = ans;
            if(pcdiff > 0) {
                if(diff > 0) {
                    ans += n;
                } else if(diff == 0) {
                    ans += n;
                } else {
                    ll la = pcdiff / abs(diff);
                    (pcdiff % abs(diff) == 0) ? la += 0 : la += 1;
                    ans += min(la, n);
                }
            } else if(pcdiff == 0) {
                if(diff > 0) {
                    ans += n - 1;
                } else if(diff == 0) {
                    continue;
                } else {
                    continue;
                }
            } else {
                if(diff > 0) {
                    ans += max((ll) 0, n - abs(pcdiff) / diff - 1);
                } else if(diff == 0) {
                    continue;
                } else {
                    continue;
                }
            }
            // cout << ans - x << '\n';
        }
        cout << ans << '\n';
    }
    return 0;
}