#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll check(vector <ll> a, ll mid)
{
    ll cnt = 0;
    for(ll i = 0; i < a.size(); i++) {
	if(a[i] < mid)
	    cnt++;
	else {
	    if(a[i]%mid == 0) cnt += a[i]/mid;
	    else cnt += a[i]/mid + 1;
	}
    }
    return cnt;
}

int main()
{
    int t; cin >> t;
    while(t--) {
	ll n, h; cin >> n >> h;
	vector <ll> a; ll buf;
	for(int i = 0; i < n; i++) {
	    cin >> buf;
	    a.push_back(buf);
	}
	ll lo = 1, hi = 1e9 + 1, mid;
	while(lo <= hi) {
	    mid = lo + (hi - lo)/2;
	    if(check(a, mid) <= h) hi = mid - 1;
	    else lo = mid + 1;
	}
	cout << lo << endl;
    }
    return 0;
}
