#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll x = 0, y = 0, z = 0, buf;
        for(ll i = 0; i < n; i++) {
            cin >> buf;
            if(buf == -1) x++;
            else if(buf == 1) y++;
            else if(buf != 0) z++;
        }
        if(z > 1)
            cout << "no\n";
        else {
            if(x && z) cout << "no\n";
            else if(x > 1 && !y) cout << "no\n";
            else cout << "yes\n";
        }
    }
    return 0;
}