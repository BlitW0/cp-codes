#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m;
    cin >> n >> m;

    ll c[n], a[m];
    for (ll i = 0; i < n; i++)
        cin >> c[i];
    for (ll i = 0; i < m; i++)
        cin >> a[i];
    
    ll x = 0, y = 0;
    while (x < n && y < m) {
        if (a[y] >= c[x])
            y++;
        x++;
    }

    cout << y << '\n';
    return 0;
}
