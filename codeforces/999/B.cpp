#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n; cin >> n;
    string s; cin >> s;

    for (ll i = 1; i <= n; i++) {
        if (n % i == 0) {
            string tmp = "";
            for (ll j = i - 1; j >= 0; j--)
                tmp += s[j];
            for (ll j = i; j < n; j++)
                tmp += s[j];
            s = tmp;
        }
    }

    cout << s << '\n';
    return 0;
}
