#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if (n == k) {
        cout << s << '\n';
        return 0;
    }

    vector < pair <ll, ll> > open, close;
    ll cnt1 = 0, cnt2 = 0;

    for (ll i = 0; i < n; i++) {
        if (s[i] == '(')
            open.push_back(make_pair(++cnt1, i));
        if (s[i] == ')')
            close.push_back(make_pair(--cnt2, i));
    }

    ll del = (n - k)/2;
    for (ll i = 0; i < del; i++)
        if (open[i].first + close[i].first == 0)
            s[open[i].second] = '#', s[close[i].second] = '#';
    
    for (char c : s)
        if (c != '#')
            cout << c;
    cout << '\n';
    return 0;
}
