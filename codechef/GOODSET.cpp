#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i = 0; i < n; i++)
            cout << 400 + i << ' ';
        cout << '\n';
    }
    return 0;
}