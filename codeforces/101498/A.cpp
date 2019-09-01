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

        map <string, ll> m;
        string s, f;
        
        while (n--) {
            cin >> s >> f;
            m[f]++;
        }

        ll ans = LLONG_MIN;
        string fans;
        for (auto it = m.begin(); it != m.end(); it++)
            if (it->second > ans)
                ans = it->second, fans = it->first;
        cout << fans << '\n';
    }
    return 0;
}
