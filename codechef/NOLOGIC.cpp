#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s; getline(cin, s);
        int cnt[26] = {0}; char tmp;
        for(int i = 0; i < s.length(); i++)
            tmp = tolower(s[i]), cnt[tmp - 'a']++;
        bool ok = 0;
        for(int i = 0; i < 26; i++)
            if(!cnt[i])
                cout << (char) (i + 'a'), ok = 1;
        if(!ok) cout << '~';
        cout << '\n';
    }
    return 0;
}