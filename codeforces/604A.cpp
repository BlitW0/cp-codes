#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pll pair <ll, ll>
const ll MAXN = 2*(1e5) + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll ans = 0, prob[5], s, us, m, w;
    for(ll i = 1; i <= 5; i++) {
        scanf("%lld", &m);
        prob[i - 1] = (2 * i) * (250 - m);
    }
    for(ll i = 1; i <= 5; i++) {
        scanf("%lld", &w);
        ans += max( (ll)(150) * i , prob[i - 1] - (ll)(50) * w );
    }
    scanf("%lld %lld", &s, &us);
    ans += (100 * s - 50 * us);
    printf("%lld\n", ans);
    return 0;
}