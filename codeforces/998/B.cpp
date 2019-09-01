#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

ll odd[105], even[105], a[105];
priority_queue < ll, vector <ll>, greater <ll> > pq;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, b;
    cin >> n >> b;

    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        odd[i] = odd[i - 1], even[i] = even[i - 1];
        if (a[i] & 1) odd[i]++;
        else even[i]++;
    }

    for (ll i = 2; i <= n; i += 2)
        if (odd[i] == even[i] && i != n)
            pq.push( abs(a[i] - a[i + 1]) );
    
    ll cnt = 0;
    while (!pq.empty()) {
        if (pq.top() > b) break;
        else b -= pq.top(), cnt++;
        pq.pop();
    }

    cout << cnt << '\n';
    return 0;
}
