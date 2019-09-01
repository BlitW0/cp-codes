#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool issub(string a, string b, ll x, ll y) {
    if(y == 0) return 1;
    if(x == 0) return 0;

    if(a[x - 1] == b[y - 1])
        return issub(a, b, x - 1, y - 1);
    return issub(a, b, x - 1, y);
}

int main() {
    ll n; cin >> n;
    vector <ll> sq;
    for(ll i = 1; i*i <= 2000000000; i++)
        sq.push_back(i*i);
    ll dig = 0; string num = "";
    for(ll i = n; i > 0; i /= 10) dig++, num += (char) ((i%10) + '0');
    ll ans = 1e18;
    for(ll i = 0; i < sq.size(); i++) {
        ll y = 0; string tmp = "";
        for(ll j = sq[i]; j > 0; j /= 10) y++, tmp += (char)(j%10 + '0');
        ll cnt = num.length() - tmp.length();
        if(issub(num, tmp, num.length(), tmp.length()))
            ans = min(cnt, ans);
    }
    if(ans == 1e18) cout << -1 << '\n';
    else cout << ans << '\n';
    return 0;
}