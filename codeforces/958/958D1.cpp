#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 2*(1e5) + 7;

struct cor {
    double x;
    ll pos;
};

bool comp(cor a, cor b) {
    return a.x < b.x;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll m; cin >> m;
    string s[MAXN]; cor p[MAXN];
    ll ans[MAXN];
    for(ll i = 0; i < m; i++) {
        cin >> s[i];
        double a, b, c, ten = 1; a = b = c = 0.0;
        ll j = s[i].length() - 1;
        for(; s[i][j] != '/'; j--, ten *= 10)
            c += ten*(double)(s[i][j] - '0');
        ten = 1; j -= 2;
        for(; s[i][j] != '+'; j--, ten *= 10)
            b += ten*(double)(s[i][j] - '0');
        ten = 1; j--;
        for(; s[i][j] != '('; j--, ten *= 10)
            a += ten*(double)(s[i][j] - '0');
        p[i].x = (a + b) / c, p[i].pos = i;
    }
    sort(p, p + m, comp);
    for(ll i = 0; i < m; ) {
        ll j = i;
        while(p[i].x == p[j].x) j++;
        for(ll k = i; k < j; k++)
            ans[p[k].pos] = j - i;
        i = j;
    }
    for(ll i = 0; i < m; i++)
        cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}