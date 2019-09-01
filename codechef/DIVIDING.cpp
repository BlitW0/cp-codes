#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll sum = n*(n + 1)/2, s = 0;
    for (ll i = 0, x; i < n; i++)
        cin >> x, s += x;
    
    (s == sum) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
