#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ans = 1e18, n;

ll mincos(string *a, string *b, string *c, string *d) {
    string chess[2 * n];
    for(ll i = 0; i < n; i++)
        chess[i] = a[i] + b[i], chess[i + n] = c[i] + d[i];
    ll val[2] = {0};
    for(ll i = 0; i < 2*n; i++)
        for(ll j = 0; j < chess[i].length(); j++) {
            if((i + j) % 2 == 0)
                (chess[i][j] == '1') ? val[0]++ : val[1]++;
            else
                (chess[i][j] == '1') ? val[1]++ : val[0]++;
        }
    return min(val[0], val[1]);
}

void getperm(ll *a, ll size, string block[][107]) {
    if(size == 1) {
        ans = min(ans, mincos(block[a[0]], block[a[1]], block[a[2]], block[a[3]]));
        return;
    }
    for(ll i = 0; i < size; i++) {
        getperm(a, size - 1, block);
        if(size & 1) swap(a[i], a[size - 1]);
        else swap(a[0], a[size - 1]);
    }
}

int main() {
    cin >> n;
    string block[4][107];
    for(ll i = 0; i < 4; i++) {
        string str;
        for(ll j = 0; j < n; j++)
            cin >> block[i][j];
        getline(cin, str);
    }
    ll a[] = {0, 1, 2, 3};
    getperm(a, 4, block);
    cout << ans << '\n';
    return 0;
}