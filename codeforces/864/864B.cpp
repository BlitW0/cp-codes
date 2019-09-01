#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n; cin >> n;
    string s; cin >> s;

    set <char> pres; ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            pres.insert(s[i]);
        else
            pres.clear();
        ans = max(ans, (ll) pres.size());
    }

    cout << ans << '\n';
    return 0;
}
