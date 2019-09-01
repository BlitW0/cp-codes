#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool leap(ll y) {
    if(y % 400 == 0) return 1;
    else if(y % 4 == 0) {
        if(y % 100 != 0) return 1;
    }
    return 0;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll y; cin >> y;
    ll cur = 0; bool type = leap(y);
    for(ll i = y + 1; y <= 100000; i++) {
        bool tmp = 0;
        if(leap(i)) tmp = 1, cur += 2;
        else cur++;
        cur %= 7;
        if(cur == 0 && tmp == type) {
            cout << i << '\n';
            return 0;
        }
    }
    return 0;
}