#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
 
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
 
    ll t;
    cin >> t;
 
    while (t--) {
        string a, b;
        cin >> a >> b;
 
        bool f = 0;
        for (ll i = 0; i < 3; i++) {
            if (a[i] == 'b' || b[i] == 'b') {
                for (ll j = 0; j < 3; j++) {
                    if (j != i)
                        if (a[j] == 'o' || b[j] == 'o')
                            for (ll k = 0; k < 3; k++)
                                if (k != i && k != j)
                                    if (a[k] == 'b' || b[k] == 'b')
                                        f = 1;
                }
            }
        }
 
        (f) ? cout << "yes\n" : cout << "no\n";
    }
    return 0;
}
