#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll a, b, c, n;
    cin >> a >> b >> c >> n;

    if (n > a + b - c && a + b - c >= 0 && c <= a && c <= b)
        cout << n - (a + b - c) << '\n';
    else
        cout << -1 << '\n';
    return 0;
}
