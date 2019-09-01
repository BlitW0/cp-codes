#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n; cin >> n;
    set <ll> s;

    for (ll i = 0; i < n; i++) {
        ll buf; cin >> buf;
        if (buf != 0) s.insert(buf);
    }

    cout << s.size() << '\n';
    return 0;
}
