#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; string s;
    cin >> n >> s;
    int cnt = 0, i;
    for(i = 0; i < s.length() - 1; cnt++) {
        if((s[i] == 'U' && s[i + 1] == 'R') || (s[i] == 'R' && s[i + 1] == 'U')) i += 2;
        else i++;
    }
    if(i != s.length()) cnt++;
    cout << cnt << '\n';
    return 0;
}