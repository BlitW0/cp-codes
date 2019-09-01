#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll m = 1e9 + 7;

ll mexp(ll a, ll n)
{
    ll res = 1;
    while(n > 0)
    {
	if(n&1) res = (res*a)%m;
	a = (a*a)%m;
	n >>= 1;
    }
    return res;
}

int main()
{
    ll a, b, n, x, sum;
    cin >> a >> b >> n >> x;
    (a == 1)?(sum = n%m):(sum = (mexp(a, n) - 1)*(mexp(a - 1, m - 2))%m);
    ll ans = ((mexp(a, n)*x%m)%m + (sum*b)%m)%m;
    cout << ans << endl;
    return 0;
}
