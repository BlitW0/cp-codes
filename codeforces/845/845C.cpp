#include <bits/stdc++.h>
using namespace std;

struct pro
{
    int l, r;
};

bool cmp(pro a, pro b)
{
    return a.l < b.l;
}

int main()
{
    int n; cin >> n;
    pro a[200007];
    for(int i = 0; i < n; i++)
	cin >> a[i].l >> a[i].r;
    sort(a, a + n, cmp);
    int tv1 = a[0].r, tv2 = -1;
    for(int i = 1; i < n; i++)
    {
	if(a[i].l > tv1)
	    tv1 = a[i].r;
	else if(a[i].l > tv2)
	    tv2 = a[i].r;
	else
	{ cout << "NO\n"; return 0; }
    }
    cout << "YES\n";
    return 0;
}
