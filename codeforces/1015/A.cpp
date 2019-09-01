#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m;
    cin >> n >> m;

    set <ll> s;
    for (ll i = 1; i <= m; i++)
        s.insert(i);
    while (n--) {
        ll l, r;
        cin >> l >> r;

        for (ll i = l; i <= r; i++)
            if (s.find(i) != s.end())
                s.erase(i);
    }

    cout << s.size() << '\n';
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << ' ';
    cout << '\n';
    return 0;
}