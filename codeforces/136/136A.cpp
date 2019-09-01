#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n, a[107], buf; cin >> n;
    for(ll i = 1; i <= n; i++) cin >> buf, a[buf] = i;
    for(ll i = 1; i <= n; i++) cout << a[i] << ' ';
    cout << '\n';
    return 0;
}