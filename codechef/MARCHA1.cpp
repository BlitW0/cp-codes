#include <bits/stdc++.h>
using namespace std;

bool is_sub(int a[], int n, int m, int cur) {
    if(m == 0)
        return 1;
    else if(m < 0 || cur == n)
        return 0;
    else {
        return is_sub(a, n, m - a[cur], cur + 1) || is_sub(a, n, m, cur + 1);
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int a[n + 1];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        (is_sub(a, n, m, 0)) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}