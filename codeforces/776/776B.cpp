#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 1e5 + 7;

ll color[MAXN], prime[MAXN];

void sieve(ll n) {
    for(ll i = 2; i <= MAXN; i++)
        prime[i] = 1, color[i] = 1;
     prime[0] = prime[1] = 0;

    for(ll i = 2; i*i <= MAXN; i++) {
        if(prime[i]) {
            color[i] = 1;
            for(ll j = 2*i; j <= MAXN; j += i) {
                prime[j] = 0, color[j] = 2;
            }
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n; scanf("%lld", &n);
    sieve(n + 1);
    ll maxcol = 1;
    for(ll i = 2; i <= n + 1; i++)
        maxcol = max(maxcol, color[i]);
    printf("%lld\n", maxcol);
    for(ll i = 2; i <= n + 1; i++)
        printf("%lld ", color[i]);
    printf("\n");
    return 0;
}