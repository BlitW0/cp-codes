#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = (1 << 18);

ll tree[2 * MAX];

ll bitlength(ll n) {
    ll len = 0;
    while(n > 0) n >>= 1, len++;
    return len;
}

void build(ll n) {
    for(ll i = n - 1; i > 0; i--) {
        if((bitlength(n) - bitlength(i)) & 1) tree[i] = tree[i << 1] | tree[i << 1 | 1];
        else tree[i] = tree[i << 1] ^ tree[i << 1 | 1];
    }
}

void update(ll p, ll b, ll n) { 
    for(tree[p += n - 1] = b; p > 1; p >>= 1) {
        if((bitlength(n) - bitlength(p >> 1)) & 1) tree[p >> 1] = tree[p] | tree[p ^ 1];
        else tree[p >> 1] = tree[p] ^ tree[p ^ 1];
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, m; cin >> n >> m; n = (1 << n);
    for(ll i = 0; i < n; i++)
        cin >> tree[n + i];
    build(n);
    while(m--) {
        ll p, b; cin >> p >> b;
        update(p, b, n);
        cout << tree[1] << '\n';
    }
    return 0;
}