#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int g; cin >> g;
        while(g--) {
            int i, n, q; cin >> i >> n >> q;
            if(n % 2 == 0)
                cout << n / 2;
            else {
                if(i != q) cout << n / 2 + 1;
                else cout << n / 2;
            }
            cout << '\n';
        }
    }
    return 0;
}