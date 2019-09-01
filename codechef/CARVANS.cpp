#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int cnt = 0, rmin = INT_MAX;
        for(int i = 0, buf; i < n; i++) {
            cin >> buf;
            if(buf <= rmin) rmin = buf, cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}