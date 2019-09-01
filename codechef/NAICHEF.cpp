#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
#define pb push_back
const ll MAXN = 1e5 + 7;
const ll mod = 1e9 + 7;

ll cnt[MAXN];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t; cin >> t;
    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b;

        memset(cnt, 0, sizeof cnt);
        for (ll i = 0, buf; i < n; i++)
            cin >> buf, cnt[buf]++;

        cout << setprecision(10) << (cnt[a] * cnt[b]) / (ld) (n * n) << '\n';
    }
    return 0;
}