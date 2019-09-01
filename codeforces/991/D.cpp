#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    string s[2];
    cin >> s[0] >> s[1];

    ll ans = 0, n = s[0].length();
    for (ll i = 0; i < n - 1; i++) {
        if (s[0][i] == '0' && s[0][i + 1] == '0' && s[1][i] == '0')
            ans++, s[0][i] = '1', s[0][i + 1] = '1', s[1][i] = '1';
        else if (s[0][i] == '0' && s[0][i + 1] == '0' && s[1][i + 1] == '0')
            ans++, s[0][i] = '1', s[0][i + 1] = '1', s[1][i + 1] = '1';
        else if (s[0][i + 1] == '0' && s[1][i] == '0' && s[1][i + 1] == '0')
            ans++, s[0][i + 1] = '1', s[1][i] = '1', s[1][i + 1] = '1';
        else if (s[0][i] == '0' && s[1][i] == '0' && s[1][i + 1] == '0')
            ans++, s[0][i] = '1', s[1][i] = '1', s[1][i + 1] = '1';
    }

    cout << ans << '\n';
    return 0;
}
