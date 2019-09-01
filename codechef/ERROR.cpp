#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        bool ok = 0;
        for(int i = 0; i + 2 < s.length(); i++) {
            if((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') || (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')) {
                ok = 1;
                break;
            } 
        }
        (ok) ? cout << "Good\n" : cout << "Bad\n";
    }
    return 0;
}