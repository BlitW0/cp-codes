#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll block = sqrt(n);
    for (ll i = n - block; i + block > 0; i -= block)
        for (ll j = 1; j <= block; j++)
            if (i + j > 0)
                cout << i + j << ' ';
    cout << '\n';
    return 0;
}
