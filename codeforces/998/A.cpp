#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll mn = 1001, ind, seq[n];
    for (ll i = 0; i < n; i++) {
        cin >> seq[i];
        if (seq[i] < mn) mn = seq[i], ind = i + 1;
    }

    if (n == 1 || (n == 2 && (seq[0] == seq[1])))
        cout << -1 << '\n';
    else cout << 1 << '\n' << ind << '\n';
    return 0;
}
