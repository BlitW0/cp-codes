#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll num[205];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    for (ll i = 0; i < 2 * n; i++)
        cin >> num[i];

    ll cnt = 0;
    for (ll i = 0; i < 2 * n - 1; i += 2) {
        if (num[i] != num[i + 1]) {
            ll j = i + 2;
            while (num[j] != num[i] && j < 2 * n) j++;
            for (ll k = j; k > i + 1; k--)
                swap(num[k], num[k - 1]), cnt++;
        }
    }

    cout << cnt << '\n';
    return 0;
}
