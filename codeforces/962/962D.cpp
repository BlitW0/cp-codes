#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pll pair <ll, ll>

priority_queue < pll, vector < pll >, greater < pll > > s, pos;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, buf; cin >> n;
    for(ll i = 0; i < n; i++)
        cin >> buf, s.push(mp(buf, i));
    set < pll > ans;
    for(; ;) {
        pll it = s.top(); s.pop();
        if(s.empty()) {
            ans.insert(mp(it.second, it.first));
            break;
        }
        pll nex = s.top();
        if(it.first == nex.first) {
            s.pop();
            s.push(mp(2*(it.first), nex.second));
        } else {
            ans.insert(mp(it.second, it.first));
        }
    }
    cout << ans.size() << '\n';
    for(auto x = ans.begin(); x != ans.end(); x++)
        cout << x->second <<  ' ';
    cout << '\n';
    return 0;
}