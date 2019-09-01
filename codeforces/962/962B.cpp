#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, a, b; cin >> n >> a >> b;
    string s; cin >> s;
    ll x = a, y = b;
    for(ll i = 0; i < n; ) {
        ll j = i;
        while(s[j] == '.') j++;
        ll tot = (j - i);
        if(a > b) {
            if(a > 0) a -= tot/2 + tot%2;
            if(b > 0) b -= tot/2;
        } else {
            if(a > 0) a -= tot/2;
            if(b > 0) b -= tot/2 + tot%2;
        }
        if(i == j) i++;
        else i = j + 1;
    }
    cout << (x - max((ll)0, a)) + (y - max((ll)0, b)) << '\n'; 
    return 0;
}