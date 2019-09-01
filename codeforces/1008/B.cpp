#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll x, y;
    cin >> x >> y;
    bool ok = 1;
    ll ser = max(x, y); n--;
    while (n--) {
        cin >> x >> y;
        if (min(x, y) > ser)
            ok = 0;
        else {
            if (max(x, y) <= ser)
                ser = max(x, y);
            else ser = min(x, y);
        }
    }

    (ok) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
