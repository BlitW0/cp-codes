#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m;
    cin >> n >> m;

    ll l, r;
    while (m--)
        cin >> l >> r;

    string ans;
    for (ll i = 0; i < n; i++)
        ans.push_back(i % 2 + '0');
    
    cout << ans << '\n';
    return 0;
}
