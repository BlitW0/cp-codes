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
        ll n, m;
        cin >> n >> m;

        ll sum = 0, mi = 0;
        for (ll i = 0; i < n; i++) {
            string s, e;
            cin >> s >> e;
            ll shh = (s[0] - '0')*10 + (s[1] - '0'), ehh = (e[0] - '0')*10 + (e[1] - '0');
            ll smm = (s[3] - '0')*10 + (s[4] - '0'), emm = (e[3] - '0')*10 + (e[4] - '0');
            if (smm != 0)
                shh++, smm = 60 - smm;
            ll tmp = (ehh - shh) + (smm + emm)/60;
            mi += (smm + emm)%60;
            sum += tmp;
        }
        (sum + mi/60 >= m) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
