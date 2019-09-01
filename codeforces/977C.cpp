#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

ll inp[2 * MAXN];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, k; cin >> n >> k;
    for (ll i = 0; i < n; i++)
        cin >> inp[i];
    sort(inp, inp + n);
    if (k == 0) {
        if (inp[0] == 1)
            cout << -1 << '\n';
        else
            cout << 1 << '\n';
    } else if (k == n) {
        cout << inp[n - 1] << '\n';
    } else {
        if (inp[k - 1] == inp[k])
            cout << -1 << '\n';
        else
            cout << inp[k - 1] << '\n';
    }
    return 0;
}