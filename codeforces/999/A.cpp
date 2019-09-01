#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, k; cin >> n >> k;
    ll seq[n];
    for (ll i = 0; i < n; i++)
        cin >> seq[i];
    
    ll x = 0, y = n - 1, cnt = 0;
    while (x <= y) {
        if (seq[x] <= k)
            x++, cnt++;
        else if (seq[y] <= k)
            y--, cnt++;
        else
            break;
    }

    cout << cnt << '\n';
    return 0;
}
