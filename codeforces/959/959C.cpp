#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    ll n; cin >> n;
    if(n < 6)
        cout << -1 << '\n';
    else {
        cout << "1 2\n1 3\n1 4\n";
        for(ll i = 5; i <= n; i++)
            cout << "2 " << i << '\n';
    }
    for(ll i = 2; i <= n; i++)
        cout << "1 " << i << '\n';
    return 0;
}