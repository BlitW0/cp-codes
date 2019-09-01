#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    
    ll sumf = 0, sumb = 0;
    ll ans = 0, i = -1, j = n;
    while (i < j) {
        if (sumf == sumb) {
            ans = max(ans, sumf);
            i++, j--;
            if (i != j) sumf += a[i], sumb += a[j];
        } else {
            if (sumf > sumb) {
                j--;
                if (i != j) sumb += a[j];
            } else {
                i++;
                if (i != j) sumf += a[i];
            }
        }
    }

    cout << ans << '\n';
    return 0;
}
