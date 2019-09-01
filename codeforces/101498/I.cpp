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
        ll n, m;
        cin >> n >> m;
        string ans[] = {"abdullah", "hasan"};
        cout << ans[(n | m) & 1] << '\n';
    }
    return 0;
}
