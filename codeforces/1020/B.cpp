#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll p[n + 1];
    for (ll i = 1; i <= n; i++)
        cin >> p[i];
    
    for (ll i = 1; i <= n; i++) {
        vector <bool> vis(n + 1, 0);
        ll j = i;
        for (; !vis[j]; vis[j] = 1, j = p[j]);
        cout << j << ' ';
    } cout << '\n';
    return 0;
}
