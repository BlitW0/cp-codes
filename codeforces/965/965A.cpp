#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll k, n, s, p;
    cin >> k >> n >> s >> p;
    cout << (ll) ceil((k * ceil(n / (ld) s)) / (ld) p) << '\n';

    return 0;
}