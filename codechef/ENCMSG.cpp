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
        ll n; string s;
        cin >> n >> s;

        for (ll i = 0; i < n - 1; i += 2)
            swap(s[i], s[i + 1]);
        
        char m[26];
        for (ll i = 0, j = 25; i < 26; i++, j--)
            m[i] = (char) j + 'a';
        
        string ans = "";
        for (ll i = 0; i < n; i++)
            ans += m[s[i] - 'a'];
        cout << ans << '\n';
    }
    return 0;
}
