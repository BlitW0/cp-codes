#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll q;
    cin >> q;

    while (q--) {
        ll n;
        cin >> n;

        map <ll, ll> cnt;
        vector <ll> cand;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            cnt[x]++;
        }

        ll ans = -1;
        for (auto it = cnt.begin(); it != cnt.end(); it++) {
            if (it->second >= 4) {
                ans = it->first;
                break;
            } else if (it->second > 1) {
                cand.push_back(it->first);
            }
        }

        if (ans != -1) {
            ll tmp = 4;
            while (tmp--)
                cout << ans << ' ';
            cout << '\n';
            continue;
        }

        ld diff = DBL_MAX;
        pll a;
        for (ll i = 1; i < cand.size(); i++) {
            ll num = 4*(cand[i] + cand[i - 1])*(cand[i] + cand[i - 1]);
            ll den = (cand[i] * cand[i - 1]);
            ld val = (num) / (ld) den;
            if (val < diff) diff = val, a = make_pair(cand[i - 1], cand[i]);
        }

        cout << a.first << ' ' << a.first << ' ' << a.second << ' ' << a.second << '\n';
    }
    return 0;
}