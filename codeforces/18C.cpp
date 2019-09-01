#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n; cin >> n;
    ll a[100007]; ll sum1 = 0;
    for(int i = 0; i < n; i++)
    {
	cin >> a[i];
	sum1 += a[i];
    }
    ll sum2 = 0, cnt = 0;
    for(int i = 0; i < n - 1; i++)
    {
	sum1 -= a[i]; sum2 += a[i];
	if(sum1 == sum2) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
