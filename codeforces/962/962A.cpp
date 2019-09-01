#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n; cin >> n;
    ll a[200007], sum = 0;
    for(ll i = 0; i < n; i++)
        cin >> a[i], sum += a[i];
    ll tmp = 0;
    for(ll i = 1; i <= n; i++) {
        tmp += a[i - 1];
        if(tmp >= sum/2 + sum%2) {
            cout << i << '\n';
            return 0;
        }
    }
    return 0;
}