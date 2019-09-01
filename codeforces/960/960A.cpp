#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int cnt[3] = {0};
    for(int i = 0; i < s.length(); i++)
        cnt[s[i] - 'a']++;
    string ans = "";
    for(int i = 0; i < cnt[0]; i++) ans += "a";
    for(int i = 0; i < cnt[1]; i++) ans += "b";
    for(int i = 0; i < cnt[2]; i++) ans += "c";
    if(cnt[2] == cnt[1] || cnt[2] == cnt[0]) {
        if(ans == s && cnt[0] != 0 && cnt[1] != 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}