#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, q; cin >> n >> q;
    vector <ll> a; ll buf;
    for(ll i = 0; i < n; i++)
	cin >> buf, a.push_back(buf);
    ll type, pos, l, r, val;
    while(q--) {
	cin >> type;
	if(type == 1)
	    cin >> pos >> val, a[pos - 1] = val;
	else {
	    cin >> l >> r;
	    if(r - l + 1 < 3) {
		cout << 0 << endl;
		continue;
	    }
	    vector <ll> tmp;
	    for(ll i = l - 1; i < r; i++)
		tmp.push_back(a[i]);
	    sort(tmp.begin(), tmp.end());
	    ll ans = 0;
	    for(ll i = tmp.size() - 1; i > 1; i--)
		if(tmp[i - 1] + tmp[i - 2] > tmp[i]) {
		    ans = tmp[i - 1] + tmp[i - 2] + tmp[i];
		    break;
		}
	    cout << ans << endl;
	}
    }
    return 0;
}
