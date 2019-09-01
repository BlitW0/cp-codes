#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m;
    cin >> n >> m;

    ll mark[10] = {0}, seq[n];

    for (ll i = 0; i < n; i++)
        cin >> seq[i];

    while (m--) {
        ll buf; cin >> buf;
        mark[buf] = 1;
    }

    for (ll i = 0; i < n; i++)
        if (mark[seq[i]])
            cout << seq[i] << ' ';
    cout << '\n';
    return 0;
}
