#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    string s;
    cin >> s;

    ll sum = 0, cnt = 0, dig = 0;
    for (ll i = 0; i < s.length(); i++) {
        ll val = s[i] - '0';
        sum += val, dig++;
        if (sum % 3 == 0 || val % 3 == 0 || dig >= 3)
            sum = 0, cnt++, dig = 0;
    }
    cout << cnt << '\n';
    return 0;
}
