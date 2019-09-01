#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN = 2 * 1e5 + 7, MOD = 1e9 + 7;

ll s[10007];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, x, f; ld a, b;
    cin >> n >> a >> b >> f;
    for (ll i = 1, buf; i < n; i++)
        cin >> buf, s[buf]++;
    
    ld maxS = (f * a) / b, S = f; --n;
    for (ll i = 1; i <= 10000; i++) {
        for (ll j = 0; j < s[i]; j++) {
            S += i;
            if (S > maxS) break;
            else n--;
        }
    }
    cout << n << '\n';
    return 0;
}