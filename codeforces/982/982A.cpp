#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN2 = 1e2 + 7;
const ll MAXN3 = 1e3 + 7;
const ll MAXN4 = 1e4 + 7;
const ll MAXN5 = 1e5 + 7;
const ll mod = 1e9 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n; cin >> n;
    string s; cin >> s;

    if (n == 1) {
        (s == "1") ? cout << "Yes\n" : cout << "No\n";
        return 0;
    }

    bool ok = 1;
    for (ll i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            if (s[i + 1] == '1')
                ok = 0;
        } else {
            if (!i) {
                if (s[i + 1] == '0')
                    ok = 0;
            } else if (i == s.length() - 1) {
                if (s[i - 1] == '0')
                    ok = 0;
            } else {
                if (s[i - 1] == '0' && s[i + 1] == '0')
                    ok = 0;
            }
        }
    }

    (ok) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}
