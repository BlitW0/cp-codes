#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll cnt[26] = {0};
    string s;
    cin >> s;

    if (n == 1) {
        cout << "Yes\n";
        return 0;
    }

    for (auto c : s)
        cnt[c - 'a']++;

    bool f = 0;
    for (ll i = 0; i < 26; i++)
        if (cnt[i] > 1)
            f = 1;
    
    (f) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}
