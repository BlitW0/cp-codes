#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000007
const ll mod = 1e9 + 7;

ll mexp(ll x, ll y, ll m)
{
    ll res = 1;
    while(y > 0) {
	if(y&1) res = (res*x)%m;
	x = (x*x)%m; y >>= 1;
    }
    return res;
}

ll hash[MAX], x;

ll gethash(ll l, ll r)
{
    ll pow = mexp(x, l - 1, mod);
    ll neg = hash[r] - hash[l - 1];
    if(neg < 0) neg += mod;
    return mexp(neg, mexp(pow, mod - 2, mod), mod);
}

int main()
{
    string s; cin >> s >> x;
    ll pow = 1, sum = 0;
    for(ll i = 1; i <= s.length(); i++) {
	sum = (sum + pow*s[i - 1])%mod;
	hash[i] = sum;
	pow = (pow*x)%mod;
    }
    ll l, r, q;
    cout << "Enter no of queries: "; cin >> q;
    while(q--) {
	cin >> l >> r;
	cout << gethash(l, r) << endl;
    }
    return 0;
}
