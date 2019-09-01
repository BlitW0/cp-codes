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
        ll n;
        cin >> n;
        
        n /= 2;
        cout << "1 1";
        while (n--) cout << "0";
        cout << '\n';
    }
    return 0;
}
