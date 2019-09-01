#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct p
{
    ll s;
    ll h;
    ll cnt;
};

void merge(p a[], ll n, p l[], ll lsize, p r[], ll rsize)
{
    ll i, j, k; i = j = k = 0;
    while(i < lsize && j < rsize)
    {
	if(!l[i].h)
	    a[k++] = l[i++];
	else if(!r[j].h)
	    a[k++] = r[j++];
	else if(l[i].s*r[j].h > r[j].s*l[i].h)
    		a[k++] = l[i++];
    	else
    		a[k++] = r[j++];
    }
    while(i < lsize) a[k++] = l[i++];
    while(j < rsize) a[k++] = r[j++];
}

void mergesort(p a[], ll n)
{
    if(n < 2) return;
    ll mid = n/2;
    p l[mid], r[n - mid];
    for(ll i = 0; i < mid; i++)
	l[i] = a[i];
    for(ll i = mid; i < n; i++)
	r[i - mid] = a[i];
    mergesort(l, mid);
    mergesort(r, n - mid);
    merge(a, n, l, mid, r, n - mid);
}

int main()
{
    ll n; cin >> n;
    p str[100007];
    for(ll i = 0; i < n; i++)
    {
	str[i].s = 0;
	str[i].h = 0;
	str[i].cnt = 0;
    }
    for(ll i = 0; i < n; i++)
    {
	string a; cin >> a;
	for(ll j = 0; j < a.length(); j++)
	{
	    if(a[j] == 'h')
	    { str[i].h++; str[i].cnt += str[i].s; }
	    else str[i].s++;
	}
    }
    mergesort(str, n);
    ll x = 0; ll ans = 0;
    for(ll i = 0; i < n; i++)
	x += str[i].h;
    for(ll i = 0; i < n; i++)
    {
	x -= str[i].h;
	str[i].cnt += x*str[i].s;
    }
    for(ll i = 0; i < n; i++)
	ans += str[i].cnt;
    cout << ans << endl;
    return 0;
}
