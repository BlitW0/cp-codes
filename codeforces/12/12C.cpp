#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{
    ll n, m; cin >> n >> m;
    ll pr[107];
    for(ll i = 0; i < n; i++)
	cin >> pr[i];
    sort(pr, pr + n);
    map <string, ll> fr; string s;
    for(ll i = 0; i < m; i++)
    {
	cin >> s;
	fr[s]++;
    }
    map <string, ll> :: iterator itr;
    vector <ll> q;
    for(itr = fr.begin(); itr != fr.end(); itr++)
	q.pb(itr->second);
    sort(q.begin(), q.end());
    reverse(q.begin(), q.end());
    ll min = 0, max = 0;
    for(ll i = 0; i < q.size(); i++)
    {
	min += q[i]*pr[i];
	max += q[i]*pr[n - i - 1];
    }
    cout << min << " " << max << endl;
    return 0;
}
