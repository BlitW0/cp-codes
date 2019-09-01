#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll s1 = 0, s2 = 0;
    for (ll i = 0, x; i < n; i++)
        cin >> x, s1 += x;
    for (ll i = 0, y; i < n; i++)
        cin >> y, s2 += y;

    (s2 <= s1) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}
