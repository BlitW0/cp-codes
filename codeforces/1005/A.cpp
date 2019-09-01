#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

vector <ll> pos;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++) {
        ll buf;
        cin >> buf;
        if (buf == 1) pos.push_back(i);
    }

    cout << pos.size() << '\n';
    for (ll i = 1; i < pos.size(); i++)
        cout << pos[i] - pos[i - 1] << ' ';
    cout << n - pos.back() << '\n';
    return 0;
}
