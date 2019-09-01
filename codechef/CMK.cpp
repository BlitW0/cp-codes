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
        ll n, k;
        cin >> n >> k;

        vector <ll> mk(n), ch(n);
        for (ll i = 0; i < n; i++)
            cin >> mk[i];
        for (ll i = 0; i < n; i++)
            cin >> ch[i];

        sort(mk.begin(), mk.end()), sort(ch.begin(), ch.end());
        bool ok = 1;
        for (ll i = k, j = n - 1; i >= 0 && j >= n - k; i--, j--)
            if (ch[j] <= mk[i])
                ok = 0;
        
        (ok) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
