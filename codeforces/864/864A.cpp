#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll cnt[105];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n; cin >> n;

    ll dis = 0;
    for (ll i = 0, buf; i < n; i++) {
        cin >> buf;
        if (!cnt[buf]) dis++;
        cnt[buf]++;
    }

    if (dis != 2)
        cout << "NO\n";
    else {
        ll idx = 0, ans[2];
        for (ll i = 1; i <= 100; i++)
            if (cnt[i])
                ans[idx++] = i;
        
        if (cnt[ans[0]] != cnt[ans[1]])
            cout << "NO\n";
        else
            cout << "YES\n" << ans[0] << ' ' << ans[1] << '\n';
    }
    return 0;
}
