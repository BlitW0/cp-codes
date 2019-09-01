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
        pair <ll, string> p[3];
        p[0].second = "First\n", p[1].second = "Second\n", p[2].second = "Third\n";

        for (ll i = 0; i < 3; i++)
            cin >> p[i].first;

        sort(p, p + 3);
        cout << p[0].second; 
    }
    return 0;
}
