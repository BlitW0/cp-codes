#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 1e2 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n, m; cin >> n >> m;
    ll a[MAXN], k[MAXN] = {0};
    for(ll i = 0; i < n; i++)
        cin >> a[i];
    ll len = 0;
    for(ll i = 1; i <= m; i++)
        cin >> k[i], len += k[i];
    for(ll i = 0; i < n - len + 1; i++) {
        ll cnt[MAXN] = {0};
        for(ll j = i; j < len + i; j++)
            cnt[a[j]]++;
        bool ok = 1;
        for(ll j = 1; j <= m; j++)
            if(cnt[j] != k[j])
                ok = 0;
        if(ok) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}