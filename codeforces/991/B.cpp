#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll seq[105];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, sum = 0; cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> seq[i], sum += seq[i];
    
    ll cnt = 0;
    sort(seq, seq + n);
    for (ll i = 0; i < n && seq[i] < 5; i++) {
        if (sum < 4.50 * n)
            sum += 5 - seq[i], cnt++;
        else break;
    }

    cout << cnt << '\n';
    return 0;
}
