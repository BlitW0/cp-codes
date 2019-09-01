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
        ll n, c;
        cin >> n >> c;

        ll sum = 0, buf;
        for (ll i = 0; i < n; i++)
            cin >> buf, sum += buf;

        (sum <= c) ? cout << "Yes\n" : cout << "No\n";    
    }
    return 0;
}