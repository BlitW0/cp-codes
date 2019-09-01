#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll p, s;
    cin >> p >> s;

    vector < pair <ll, ll> > ans(p);
    for (ll i = 0; i < p; i++) {
        vector < pair <ll, ll> > S(s);
        ll cnt = 0;
        
        for (ll j = 0; j < s; j++)
            cin >> S[j].first;
        for (ll j = 0; j < s; j++)
            cin >> S[j].second;
        
        sort(S.begin(), S.end());
        
        for (ll j = 0; j < s - 1; j++)
            if (S[j].second > S[j + 1].second)
                cnt++;
            
        ans[i] = make_pair(cnt, i + 1);
    }

    sort(ans.begin(), ans.end());
    for (ll i = 0; i < p; i++)
        cout << ans[i].second << '\n';
    return 0;
}
