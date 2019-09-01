#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll MAXN = 1e5 + 7, MOD = 1e9 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n; cin >> n;
    set <string> d; ll a[1007] = {0};
    string s;
    while (n--) {
        cin >> s;
        ll c[26] = {0};
        string ar = "";
        for (ll i = 0; i < s.length(); i++)
            c[s[i] - 'a']++;
        for (ll i = 0; i < 26; i++)
            if (c[i])
                ar += (char) (i + 'a');
        d.insert(ar);
    }
    cout << d.size() << '\n';
    return 0;
}