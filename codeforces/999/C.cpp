#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char str[400005];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, k;
    scanf("%lld %lld %s", &n, &k, str);

    for (ll i = 0; i < 26 && k; i++) {
        ll cnt = 0;
        for (ll j = 0; j < n && k; j++)
            if (str[j] == 'a' + i)
                str[j] = '0', cnt++, k--;
        // printf("%lld\n", cnt);
    }

    for (ll i = 0; i < n; i++)
        if (str[i] != '0')
            printf("%c", str[i]);
    printf("\n");
    return 0;
}
