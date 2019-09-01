#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll a, b, f, k;
    cin >> a >> b >> f >> k;

    ll refuel = 0, fuel = b;
    bool possible = 1;
    for (ll i = 0; i < k; i++) {
        if (i & 1) {
            if (i != k - 1) {
                if (fuel < a + f) {
                    if (fuel < a - f)
                        possible = 0;
                    else
                        refuel++, fuel = b - f;
                } else fuel -= a;
            } else {
                if (fuel < a) {
                    if (fuel < a - f)
                        possible = 0;
                    else
                        refuel++, fuel = b - f;
                }
            }
        } else {
            if (i != k - 1) {
                if (fuel < a + a - f) {
                    if (fuel < f)
                        possible = 0;
                    else
                        refuel++, fuel = b - (a - f);
                } else fuel -= a;
            } else {
                if (fuel < a) {
                    if (fuel < f)
                        possible = 0;
                    else
                        refuel++, fuel = b - (a - f);
                } else fuel -= a;
            }
        }
        if (!possible || fuel < 0) {
            refuel = -1;
            break;
        }
        // cout << fuel << ' ' << refuel << '\n';
    }

    cout << refuel << '\n';
    return 0;
}
