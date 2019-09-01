#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 1e5 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n; cin >> n;
    ( n & 1 ) ? cout << ( n + 1 ) / 2 : cout << n / 2 + 1;
    cout << '\n';
    return 0;
}