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

map <string, string> m;
set <string> ans;
vector <string> tmp;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    tmp.pb("Power"), tmp.pb("Time"), tmp.pb("Space");
    tmp.pb("Soul"), tmp.pb("Reality"), tmp.pb("Mind"); 

    m["purple"] = tmp[0], m["green"] = tmp[1], m["blue"] = tmp[2];
    m["orange"] = tmp[3], m["red"] = tmp[4], m["yellow"] = tmp[5];

    for (ll i = 0; i < tmp.size(); i++)
        ans.insert(tmp[i]);

    ll n; cin >> n; string s;
    for (ll i = 0; i < n; i++)
        cin >> s, ans.erase(m[s]);

    cout << ans.size() << '\n';
    for (auto it = ans.begin(); it != ans.end(); it++)
        cout << *it << '\n';
    return 0;
}
