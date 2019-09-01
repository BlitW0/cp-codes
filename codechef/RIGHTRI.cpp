#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll cnt = 0;
    while (n--) {
        ll x[3], y[3];
        for (ll i = 0; i < 3; i++)
            cin >> x[i] >> y[i];
        
        ll num[3], den[3];
        for (ll i = 0, c = 0; i < 3; i++)
            for (ll j = i + 1; j < 3; j++)
                num[c] = y[j] - y[i], den[c] = x[j] - x[i], c++;
        
        bool ok = 0;
        for (ll i = 0; i < 3; i++)
            for (ll j = i + 1; j < 3; j++)
                if (num[i]*num[j] + den[i]*den[j] == 0)
                    ok = 1;
        if (ok) cnt++;
    }

    cout << cnt << '\n';
    return 0;
}
