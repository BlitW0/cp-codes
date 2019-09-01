#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
const ll MAXN = 1e5 + 5;

ll cnt[MAXN], seq[MAXN];
bool done[MAXN];
set <ll> s;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++) {
        cin >> seq[i];
        if (!cnt[seq[i]]) s.insert(seq[i]);
        cnt[seq[i]]++;
    }

    ll ans = 0;
    memset(done, 0, sizeof done);
    for (ll i = 0; i < n - 1; i++) {
        cnt[seq[i]]--;
        if (!cnt[seq[i]])
            s.erase(seq[i]);
        if (!done[seq[i]]) {
            done[seq[i]] = 1;
            ans += (ll) s.size();
        }
    }

    cout << ans << '\n';
    return 0;
}
