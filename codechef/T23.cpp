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
        ll n;
        cin >> n;

        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        
        bool ok = (a[0] == 1) ? 1 : 0;
        sort(a, a + n);
        for (ll i = 0; i < n - 1; i++) {
            if (a[i] == 1) {
                ok = 1;
                break;
            } bool tmp = 1;
            for (ll j = i + 1; j < n; j++)
                if (a[j] % a[i] == 0)
                    tmp = 0;
            if (tmp) ok = 1;
        }

        (ok) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
