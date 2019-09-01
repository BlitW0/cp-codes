#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ld, ll> pdl;
#define mp make_pair
const ll mod = 1e9 + 7;

priority_queue < pdl, vector < pdl >, greater < pdl > > pq;
 
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
 
    ll n, k;
    cin >> n >> k;
 
    vector <ll> a(n), dp(n);
    vector <ld> ldp(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
 
    dp[0] = a[0], ldp[0] = log(a[0]);
    pq.push(mp(ldp[0], 0));
    for (ll i = 1; i < n; i++) {
        while (pq.top().second < i - k)
            pq.pop();
        pdl p = pq.top();

        ldp[i] = p.first + log(a[i]);
        dp[i] = (dp[p.second]*a[i]) % mod;
        
        pq.push(mp(ldp[i], i));
    }

    cout << dp[n - 1] << '\n';
    return 0;
}