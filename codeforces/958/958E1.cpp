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

    ll r, b; cin >> r >> b;
    for(ll i = 0, buf; i < r + b; i++)
        cin >> buf;
    (r == b) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}