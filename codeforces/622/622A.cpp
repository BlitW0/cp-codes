#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, i; cin >> n;
    for (i = 1; (i * (i + 1)) / 2 < n; i++);
    i--; cout << n - (i * (i + 1)) / 2 << '\n';
    return 0;
}