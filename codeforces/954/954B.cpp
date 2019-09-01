#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; string s;
    cin >> n >> s;
    int m = -1;
    for(int i = 0; i < s.length()/2; i++) {
        bool pal = 1;
        for(int j = 0; j <= i; j++)
            if(s[j] != s[j + i + 1])
                pal = 0;
        if(pal)
            m = max(m, i);
    }
    if(m == -1) cout << s.length();
    else cout << s.length() - m;
    cout << '\n';
    return 0;
}