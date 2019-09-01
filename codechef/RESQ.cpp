#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int ans = INT_MAX;
        for(int i = 1; i*i <= n; i++)
            if(n % i == 0)
                ans = min(ans, abs(i - n / i));
        cout << ans << '\n';
    }
    return 0;
}