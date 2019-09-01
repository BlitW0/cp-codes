#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n; cin >> n;
    vector <ll> a (n);
    for(ll i = 0; i < n; i++)
        cin >> a[i];
    bool ok = 1;
    for(ll i = 0; i < n - 1; i++)
        if(abs(a[i] - a[i + 1]) >= 2)
            ok = 0;
    (ok) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}