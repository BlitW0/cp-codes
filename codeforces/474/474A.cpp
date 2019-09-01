#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

map < char, pair <char, char> > m;

void fil(string a) {
    for (ll i = 0; i < a.length(); i++) {
        if (i - 1 >= 0) m[a[i]].first = a[i - 1];
        if (i + 1 < a.length()) m[a[i]].second = a[i + 1];
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    fil("qwertyuiop"), fil("asdfghjkl;"), fil("zxcvbnm,./");
    
    char type; cin >> type;
    string s; cin >> s;
    if (type == 'R') {
        for (ll i = 0; i < s.length(); i++)
            s[i] = m[s[i]].first;
    } else {
        for (ll i = 0; i < s.length(); i++)
            s[i] = m[s[i]].second;
    }
    cout << s << '\n';
    return 0;
}