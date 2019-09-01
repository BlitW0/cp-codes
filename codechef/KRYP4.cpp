#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, buf; cin >> n;
    map <ll, ll> m;
    set <ll> s;
    for(ll i = 0; i < n; i++)
    {
	cin >> buf;
	s.insert(buf);
	m[buf]++;
    }
    set <ll> :: iterator itr;
    ll ans = 0;
    for(itr = s.begin(); itr != s.end(); itr++)
	ans += ((m[*itr])*(m[*itr] - 1))/2;
    cout << ans << endl;
    return 0;
}
