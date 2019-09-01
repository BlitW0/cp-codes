#include <bits/stdc++.h>
using namespace std;
typedef double ld;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 1e5 + 7;
const ll mod = 1e9 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    ll t;
    cin >> t; while (t--)
    {
        ll x, y, k, n;
        cin >> x >> y >> k >> n;
        vector < pll > a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i].second >> a[i].first;

        sort(a.begin(), a.begin() + n);
        bool ok = 0;
        for (ll i = 0; i < n; i++)
            if (y + a[i].second >= x && a[i].first <= k)
                ok = 1;
        
        (ok) ? cout << "LuckyChef\n" : cout << "UnluckyChef\n";
    }
    return 0;
}