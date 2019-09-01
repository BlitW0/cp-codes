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

priority_queue < pll, vector < pll >, greater < pll > > inpq;
priority_queue < pll > expq;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n; cin >> n;
    for (ll i = 0, buf; i < n; i++)
        cin >> buf, inpq.push(mp(buf, i + 1));
    
    char type;
    for (ll i = 0; i < 2 * n; i++) {
        cin >> type;
        if (!(type - '0')) {
            cout << inpq.top().second << ' ';
            expq.push(inpq.top());
            inpq.pop();
        } else {
            cout << expq.top().second << ' ';
            expq.pop();
        }
    }
    cout << '\n';
    return 0;
}