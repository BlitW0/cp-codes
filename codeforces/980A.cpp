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

    string neck; cin >> neck;
    ll p = 0, l = 0;
    for (ll i = 0; i < neck.length(); i++)
        (neck[i] == '-') ? l++ : p++;
    if (p)
        (l % p) ? cout << "NO\n" : cout << "YES\n";
    else
        cout << "YES\n";
    return 0;
}