#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const ll MAX = 2*1e5 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string inp; cin >> inp;
    set <ll> zeb, alm;
    vector <ll> ans[MAX];
    ll ind = 0;
    for(ll i = 0; i < inp.length(); i++) {
        if(inp[i] == '0') {
            if(!alm.empty()) {
                ll ind = *alm.begin();
                ans[ind].pb(i + 1);
                zeb.insert(ind), alm.erase(ind);
            } else {
                zeb.insert(++ind);
                ans[ind].pb(i + 1);
            }
        } else {
            if(zeb.empty()) {
                cout << -1 << '\n';
                return 0;
            } else {
                ll ind = *zeb.begin();
                ans[ind].pb(i + 1);
                alm.insert(ind), zeb.erase(ind);
            }
        }
    }
    if(!alm.empty()) {
        cout << -1 << '\n';
        return 0;
    }
    cout << ind << '\n';
    for(ll i = 1; i <= ind; i++) {
        cout << ans[i].size() << ' ';
        for(auto x : ans[i])
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}