#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll mod = 1e9 + 7;
const ll MAXN = 1e2 + 7;

string inp[MAXN];

bool cmp(string a, string b) {
    return a.length() < b.length();
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n; cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> inp[i];
    
    bool ok = 1;
    sort(inp, inp + n, cmp);
    for (ll i = 0; i < n - 1; i++)  
        if (inp[i + 1].find(inp[i]) == inp[i + 1].npos)
            ok = 0;
    
    if (ok) {
        cout << "YES\n";
        for (ll i = 0; i < n; i++)
            cout << inp[i] << '\n';
    } else cout << "NO\n";
    return 0;
}
