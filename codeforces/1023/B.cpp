#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, k;
    cin >> n >> k;

    ll lo = max(1ll, k - n), hi = min(k - 1, n);
    cout << max(0ll, (hi - lo + 1)/2) << '\n';
    return 0;
}
