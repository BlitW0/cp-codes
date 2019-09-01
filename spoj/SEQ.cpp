#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9;

void init(ll a[][10], ll k, ll c[]) {
    for(ll i = 0; i < k - 1; i++)
        for(ll j = 0; j < k; j++)
            (j != i + 1) ? a[i][j] = 0 : a[i][j] = 1;
    for(ll i = 0; i < k; i++)
        a[k - 1][i] = c[k - 1 - i];
}

void mul(ll a[][10], ll r[][10], ll k) {
    ll tmp[10][10];
    for(ll i = 0; i < k; i++)
        for(ll j = 0; j < k; j++) {
            tmp[i][j] = 0;
            for(ll p = 0; p < k; p++)
                tmp[i][j] = (tmp[i][j] + (r[i][p] * a[p][j]) % mod) % mod;
        }
    for(ll i = 0; i < k; i++)
        for(ll j = 0; j < k; j++)
            r[i][j] = tmp[i][j];
}

ll mexp(ll m[][10], ll n, ll k, ll col_mat[]) {
    ll res[10][10];
    for(ll i = 0; i < k; i++)
        for(ll j = 0; j < k; j++)
            (i == j) ? res[i][j] = 1 : res[i][j] = 0;
    while(n > 0) {
        if(n & 1) mul(m, res, k);
        mul(m, m, k), n >>= 1;
    }
    ll ans = 0;
    for(ll i = 0; i < k; i++)
        ans = (ans + (res[k - 1][i]*col_mat[i]) % mod) % mod;
    return ans;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t; cin >> t;
    while(t--) {
        ll k; cin >> k;
        ll col_mat[10], rec_mat[10][10];
        for(ll i = 0; i < k; i++)
            cin >> col_mat[i];
        ll c[10], n;
        for(ll i = 0; i < k; i++)
            cin >> c[i];
        cin >> n;
        init(rec_mat, k, c);
        (n <= k) ? cout << col_mat[n - 1] : cout << mexp(rec_mat, n - k, k, col_mat);
        cout << '\n';
    }
    return 0;
}