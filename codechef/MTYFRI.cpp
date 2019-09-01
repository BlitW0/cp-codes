#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        vector <ll> a, b;
        ll suma = 0, sumb = 0;
        for (ll i = 0, buf; i < n; i++) {
            cin >> buf;
            if (i & 1) b.pb(buf), sumb += buf;
            else a.pb(buf), suma += buf;
        }

        sort(a.begin(), a.end()), sort(b.begin(), b.end());
        ll swaps = 0;
        for (ll i = a.size() - 1, j = 0; i >= 0 && j < b.size(); i--, j++) {
            if (sumb > suma)
                break;
            else {
                if(swaps < k) {
                    suma = suma - a[i] + b[j];
                    sumb = sumb - b[j] + a[i];
                    swaps++;
                }
            }
            // cout << suma << ' ' << sumb << '\n';
        }

        (sumb > suma) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}