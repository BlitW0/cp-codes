#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    string s;
    cin >> s;

    ll p, zero = 0;
    for (ll i = 0; i < s.length(); i++) {
        if (s[i] == '2') {
            p = i;
            break;
        } if (s[i] == '0') zero++;
    }

    string ans = "";
    while (zero--) ans += '0';

    for (ll i = 0; i < s.length(); i++)
        if (s[i] == '1')
            ans += '1';
    
    for (ll i = p; i < s.length(); i++)
        if (s[i] != '1')
            ans += s[i];
    cout << ans << '\n';
    return 0;
}
