#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll cnt;

void merge(ll a[], ll n, ll l[], ll ls, ll r[], ll rs)
{
    ll i, j, k; i = j = k = 0;
    while(i < ls && j < rs) {
	if(l[i] <= r[j])
	    a[k++] = l[i++];
	else {
	    a[k++] = r[j++];
	    cnt += ls - i;
	}
    }
    while(i < ls) a[k++] = l[i++];
    while(j < rs) a[k++] = r[j++];
}

void mergesort(ll a[], ll n)
{
    if(n < 2) return;
    ll mid = n/2; ll l[mid], r[n - mid];
    for(ll i = 0; i < mid; i++) l[i] = a[i];
    for(ll i = mid; i < n; i++) r[i - mid] = a[i];
    mergesort(l, mid);
    mergesort(r, n - mid);
    merge(a, n, l, mid, r, n - mid);
}

int main()
{
    ll t; cin >> t;
    while(t--) {
	ll n; cin >> n;
	ll a[n + 1];
	for(ll i = 0; i < n; i++)
	    cin >> a[i];
	cnt = 0;
	mergesort(a, n);
	cout << cnt << endl;
    }
    return 0;
}
