#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, x;
    cin >> n >> x;

    vector <ll> a(n), ser;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] != (a[i] & x))
            ser.push_back(a[i] & x);
    }

    bool ok1 = 0, ok2 = 0, ok3 = 0;
    sort(a.begin(), a.end()), sort(ser.begin(), ser.end());
    for (ll i = 0; i < n; i++) {
        if (upper_bound(a.begin(), a.end(), a[i]) - lower_bound(a.begin(), a.end(), a[i]) >= 2)
            ok1 = 1;
        if (upper_bound(ser.begin(), ser.end(), a[i]) - lower_bound(ser.begin(), ser.end(), a[i]) > 0)
            ok2 = 1;
    }
    for (ll i = 0; i < (ll) ser.size(); i++)
        if (upper_bound(ser.begin(), ser.end(), ser[i]) - lower_bound(ser.begin(), ser.end(), ser[i]) >= 2)
            ok3 = 1;
    
    if (ok1)
        cout << 0 << '\n';
    else if (ok2)
        cout << 1 << '\n';
    else if (ok3)
        cout << 2 << '\n';
    else
        cout << -1 << '\n';

    return 0;
}
