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
        ll s;
        cin >> s;

        s /= 6;
        cout << (ll) sqrt(s) << '\n';
    }
    return 0;
}
