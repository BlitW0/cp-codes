#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const ll MAX = 2000007;

set <ll> poss;
bool prime[MAX];
vector <ll> fact[MAX];

void sieve() {
    for(ll i = 2; i < MAX; i++) {
        if(!prime[i])
            for(ll j = i; j < MAX; j += i)
                fact[j].pb(i), prime[j] = 1;
        poss.insert(i);
    }
}

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    ll n, buf; cin >> n;
    bool mismatch = 0;
    sieve();
    for(ll i = 0; i < n; i++) {
        cin >> buf;
        ll out = *poss.begin();
        if(!mismatch) {
            out = *poss.lower_bound(buf);
            if(out != buf)
                mismatch = 1;
        }
        cout << out << ' ';
        for(ll j = 0; j < fact[out].size(); j++)
            for(ll k = fact[out][j]; k < MAX; k += fact[out][j])
                poss.erase(k);
    }
    cout << '\n';
    return 0;
}