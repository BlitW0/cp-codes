#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll a, b, c;
    cin >> a >> b >> c;

    ld d = sqrt(b*b - 4*a*c);
    ld x1 = (-b + d) / (ld) (2*a), x2 = (-b - d) / (ld) (2*a);
    cout << setprecision(10) << x1 << '\n' << x2 << '\n';
    return 0;
}
