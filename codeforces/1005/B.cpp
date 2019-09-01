#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    string s, t;
    cin >> s >> t;

    string x, y;
    if (s.length() < t.length())
        x = s, y = t;
    else x = t, y = s;

    ll i = x.length(), j = y.length();
    for (; i > 0; ) {
        if (x[i - 1] == y[j - 1])
            i--, j--;
        else break;
    }

    cout << i + j << '\n';
    return 0;
}
