#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    
    for (ll i = 0; i < n; i++)
        (a[i] & 1) ? cout << a[i] << ' ' : cout << a[i] - 1 << ' ';
    cout << '\n';
    return 0;
}
