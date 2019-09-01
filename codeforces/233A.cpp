#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const ll MAXN2 = 1e2 + 7;
const ll MAXN3 = 1e3 + 7;
const ll MAXN4 = 1e4 + 7;
const ll MAXN5 = 1e5 + 7;
const ll mod = 1e9 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n; cin >> n;
    if (n % 2)
        cout << -1;
    else {
        for (ll i = 1; i <= n; i++)
            cout << n - i + 1 << ' ';
    }
    cout << '\n';
    return 0;
}