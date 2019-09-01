#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, q;
        cin >> n >> q;

        vector <ll> a(n);
        unordered_map <ll, ll> m;
        set <ll> s;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
            s.insert(a[i]);
        }

        while (q--) {
            ll type;
            cin >> type;

            if (type == 2) {
                if(s.find(0ll) != s.end())
                    cout << (ll) s.size() - 1 << endl;
                else 
                    cout << (ll) s.size() << '\n';
            } else {
                ll p, v;
                cin >> p >> v;
                if (a[p - 1] != v) {
                    ll val = --m[a[p - 1]];
                    if (!val)
                        s.erase(a[p - 1]);
                    m[v]++;
                    a[p - 1] = v;
                    s.insert(v);
                }
            }
        }
    }
    return 0;
}
