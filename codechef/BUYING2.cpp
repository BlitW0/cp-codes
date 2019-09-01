#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        int a[n + 1], sum = 0; bool ok = 1;
        for(int i = 0; i < n; i++)
            cin >> a[i], sum += a[i];
        int ans = (sum / x);
        for(int i = 0; i < n; i++)
            if((sum - a[i]) / x == ans)
                ok = 0;
        (!ok) ? cout << -1 : cout << ans;
        cout << '\n';
    }
    return 0;
}