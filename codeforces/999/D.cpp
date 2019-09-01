#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 200005;

bool done[MAXN];
ll modsize[MAXN], seq[MAXN];
set <ll> mods;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, m;
    cin >> n >> m;

    ll req = n / m;
    for (ll i = 0; i < n; i++) {
        cin >> seq[i];
        if (modsize[seq[i] % m] < req)
            modsize[seq[i] % m]++, done[i] = 1;
    }

    for (ll i = 0; i < m; i++)
        if (modsize[i] < req)
            mods.insert(i);
    
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
        if (!done[i]) {
            auto it = mods.upper_bound(seq[i] % m);
            if (it != mods.end()) {
                cnt += *it - seq[i] % m;
                seq[i] += *it - seq[i] % m;
                modsize[*it]++;
                if (modsize[*it] == req)
                    mods.erase(it);
            } else {
                it = mods.begin();
                cnt += m + *it - seq[i] % m;
                seq[i] += m + *it - seq[i] % m;
                modsize[*it]++;
                if (modsize[*it] == req)
                    mods.erase(it);
            }
        }

    cout << cnt << '\n';
    for (ll i = 0; i < n; i++)
        cout << seq[i] << ' ';
    cout << '\n';

    return 0;
}
