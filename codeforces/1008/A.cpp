#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    string s;
    cin >> s;

    char vow[] = {'a', 'e', 'i', 'o', 'u'};
    bool ok = 1;
    for (ll i = 0; i < s.length() - 1; i++) {
        if (s[i] == 'n')
            continue;
        bool f = 0, f1 = 0;
        for (ll j = 0; j < 6; j++) {
            if (s[i] == vow[j])
                f = 1;
            if (s[i + 1] == vow[j])
                f1 = 1;
        }
        if (f) continue;
        if (!f1) ok = 0;
    }
    bool f1 = (s[s.length() - 1] == 'n');
    for (ll j = 0; j < 6; j++)
        if (s[s.length() - 1] == vow[j])
            f1 = 1;
    if (!f1) ok = 0;

    (ok) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
