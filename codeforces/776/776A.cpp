#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    map <ll, string> m;
    string a, b; cin >> a >> b;
    m[0] = a, m[1] = b;
    ll n; cin >> n;
    cout << a << ' ' << b << '\n';
    while(n--) {
        string x, y; cin >> x >> y;
        if(x == m[0]) m[0] = y;
        else m[1] = y;
        cout << m[0] << ' ' << m[1] << '\n';
    }
    return 0;
}