#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void sub(ll a, ll b) 
{
    //cout << a << " " << b << endl;
    if(!a || !b) {
	cout << a << " " << b << endl;
	return;
    } else if(a >= 2*b) {
	a %= 2*b;
	sub(a, b);
    } else if(b >= 2*a) {
	b %= 2*a;
	sub(a, b);
    } else {
	cout << a << " " << b << endl;
	return;
    }
}

int main()
{
    ll n, m; cin >> n >> m;
    sub(n, m);
    return 0;
}
