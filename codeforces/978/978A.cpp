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

bool pres[MAXN3];
ll inp[MAXN2];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n; cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> inp[i];
    
    memset(pres, 0, sizeof pres);
    stack <ll> s;
    for (ll i = n - 1; i >= 0; i--)
        if (!pres[inp[i]])
            s.push(inp[i]), pres[inp[i]] = 1;
    
    cout << s.size() << '\n';
    for (; !s.empty(); s.pop())
        cout << s.top() << ' ';
    cout << '\n';
    return 0;
}