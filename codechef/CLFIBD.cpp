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
        string s;
        cin >> s;

        vector <ll> cnt(26, 0), a;
        for (ll i = 0; i < (ll) s.length(); i++)
            cnt[s[i] - 'a']++;
        
        for (ll i = 0; i < 26; i++)
            if (cnt[i])
                a.push_back(cnt[i]);
        
        sort(a.begin(), a.end());
        bool ok1 = 1;
        for (ll i = 2; i < (ll) a.size(); i++)
            if (a[i] != a[i - 1] + a[i - 2])
                ok1 = 0;
        if ((ll) a.size() >= 2)
            swap(a[1], a[0]);
        bool ok2 = 1;
        for (ll i = 2; i < (ll) a.size(); i++)
            if (a[i] != a[i - 1] + a[i - 2])
                ok2 = 0;
        
        (ok1 || ok2) ? cout << "Dynamic\n" : cout << "Not\n";
    }
    return 0;
}
