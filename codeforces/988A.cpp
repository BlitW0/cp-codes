#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll mod = 1e9 + 7;
const ll MAXN = 1e2 + 7;

ll cnt[MAXN], pos[MAXN];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, k, dis = 0; cin >> n >> k;
    for (ll i = 1, buf; i <= n; i++) {
        cin >> buf;
        if (!cnt[buf]) dis++;
        cnt[buf]++, pos[buf] = i;
    }

    if (dis < k)
        cout << "NO\n";
    else {
        cout << "YES\n";
        for (ll i = 1; i <= 100 && k; i++)
            if (cnt[i])
                cout << pos[i] << ' ', k--;
        cout << '\n';
    }
    return 0;
}
