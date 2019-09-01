#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m;
    cin >> n >> m;

    ll tmp = m;
    ll sum = 0;
    while (tmp--) {
        ll x, d;
        cin >> x >> d;

        sum += x * n;
        if (!d) {
            continue;
        } else if (d > 0) {
            sum += d * (((n) * (n - 1)) / 2);
        } else {
            if (n & 1)
                sum += d * ((n / 2) * (n / 2 + 1));
            else
                sum += d * ((n * n) / 4);
        }
    }

    cout << setprecision(10) << sum / (ld) n << '\n';
    return 0;
}
