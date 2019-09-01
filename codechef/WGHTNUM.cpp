#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

ll mexp(ll x, ll y) {
    ll res = 1;
    while(y > 0) {
        if(y & 1) res = (res*x) % mod;
        x = (x*x) % mod, y >>= 1;
    }
    return res;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t; cin >> t;
    while(t--) {
        ll n, w; cin >> n >> w;
        ll cnt = 0;
        for(ll lsb = 0; lsb <= 9; lsb++)
            for(ll msb = 1; msb <= 9; msb++)
                if(lsb - msb == w)
                    cnt++;
        cout << (cnt * mexp(10, n - 2)) % mod << '\n';
    }
    return 0;
}