#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, buf; cin >> n;
    vector <ll> v, t;
    for(ll i = 0; i < n; i++)
	cin >> buf, v.push_back(buf);
    for(ll i = 0; i < n; i++)
	cin >> buf, t.push_back(buf);

    multiset <ll> s; ll ad = 0;
    for(ll i = 0; i < n; i++) {
	s.insert(v[i] - ad);
	ll ans = 0;
	for( ; !s.empty() && *(s.begin()) + ad <= t[i]; s.erase(s.begin()))
	    ans += *(s.begin()) + ad;
	ans += s.size()*t[i];
	ad -= t[i];
	cout << ans << ' ';
    }
    cout << '\n';
}
