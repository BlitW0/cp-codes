#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        ll cntf[26] = {0}, cntb[26] = {0};
        ll y = 0, dec[s.length()];

        for (ll i = s.length() - 1; i >= 0; i--) {
            dec[i] = 0;
            for (ll j = s[i] - 'a' + 1; j < 26; j++)
                y += cntf[j], dec[i] -= cntf[j];
            cntf[s[i] - 'a']++;
        }

        ll ans = y;
        for (ll i = 0; i < s.length(); i++) {
            cntf[s[i] - 'a']--;
            for (ll j = 0; j < s[i] - 'a'; j++)
                dec[i] -= cntb[j];
            for (ll j = 0; j < 26; j++) {
                ll x = abs(j - s[i] + 'a');
                ll inc = 0;
                for (ll k = 0; k < j; k++)
                    inc += cntb[k];
                for (ll k = j + 1; k < 26; k++)
                    inc += cntf[k];
                ll tmpy = y + dec[i] + inc;
                ans = min(ans, tmpy + x); 
            }
            cntb[s[i] - 'a']++;
        }

        cout << ans << '\n';
    }
    return 0;
}
