#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n; int a[n + 1];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int glo_inv = 0, loc_inv = 0;
        for(int i = 0; i < n; i++)
            for(int j = i + 1; j < n; j++)
                if(a[j] < a[i])
                    glo_inv++;
        for(int i = 0; i < n - 1; i++)
            if(a[i] > a[i + 1])
                loc_inv++;
        (glo_inv == loc_inv) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}