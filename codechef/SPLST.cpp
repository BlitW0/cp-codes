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
        ll a[3], x, y;
        cin >> a[0] >> a[1] >> a[2] >> x >> y;

        sort(a, a + 3);
        if (a[0] + a[1] + a[2] != x + y || a[0] > min(x, y))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
