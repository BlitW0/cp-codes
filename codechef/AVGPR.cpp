#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll a[100007], cnt[2007] = {0};
        for(ll i = 0; i < n; i++)
            cin >> a[i], cnt[a[i] + 1000]++;
        bool done[2007] = {0};
        ll ans = 0;
        for(ll i = 0; i < n; i++)
            if(!done[a[i] + 1000]) {
                ans += ((cnt[a[i] + 1000] - 1)*cnt[a[i] + 1000])/2;
                for(ll j = a[i] + 1; j <= 1000; j++)
                    if(2*a[i] - j >= -1000)
                        ans += cnt[j + 1000]*cnt[2*a[i] - j + 1000];
                done[a[i] + 1000] = 1;
            }
        cout << ans << '\n';
    }
    return 0;
}