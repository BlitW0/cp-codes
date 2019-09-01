#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s, j; cin >> s >> j;
        map <char, bool> m;
        for(int i = 0; i < s.length(); i++)
            m[s[i]] = 1;
        int cnt = 0;
        for(int i = 0; i < j.length(); i++)
            if(m[j[i]])
                cnt++;
        cout << cnt << '\n';
    }
    return 0;
}