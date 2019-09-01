#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main()
{
    ll n, k; cin >> n >> k;
    ll a[100007];
    for(ll i = 0; i < n; i++)
	cin >> a[i];
    set <ll> mx; set <ll> :: iterator itr;
    map <ll, ll> m;
    for(ll i = 0; i < k; i++)
    {
	if(!m[a[i]]) mx.insert(a[i]);
	else mx.erase(a[i]);
	m[a[i]]++;
    }
    if(!mx.size()) cout << "Nothing\n";
    else cout << *mx.rbegin() << endl;
    for(ll i = k; i < n; i++)
    {
	m[a[i - k]]--;
	if(!m[a[i - k]]) mx.erase(a[i - k]);
	if(m[a[i - k]] == 1) mx.insert(a[i - k]);
	m[a[i]]++;
	if(m[a[i]] == 1) mx.insert(a[i]);
	else mx.erase(a[i]);
	if(!mx.size()) cout << "Nothing\n";
	else cout << *mx.rbegin() << endl;
    }
    return 0;
}
