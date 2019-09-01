#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN2 = 1e2 + 7;
const ll MAXN3 = 1e3 + 7;
const ll MAXN4 = 1e4 + 7;
const ll MAXN5 = 1e5 + 7;
const ll mod = 1e9 + 7;

char inp[2 * MAXN3][2 * MAXN3];
ll poss[2 * MAXN3];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m; cin >> n >> m;
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < m; j++) {
            cin >> inp[i][j];
            if (inp[i][j] - '0') poss[j]++;
        }
    
    bool ok = 0;
    for (ll i = 0; i < n; i++) {
        bool tmp = 1;
        for (ll j = 0; j < m; j++)
            if (!(poss[j] - (inp[i][j] - '0')))
                tmp = 0;
        if (tmp) ok = 1;
    }

    (ok) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
