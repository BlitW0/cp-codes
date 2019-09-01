#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; getline(cin, s);
    int i = s.length() - 2;
    while(s[i] == ' ') i--;
    set <char> v; v.insert('a'); v.insert('e'); v.insert('i');
    v.insert('o'); v.insert('u'); v.insert('y'); v.insert('A'); v.insert('E');
    v.insert('O'); v.insert('U'); v.insert('Y');
    (v.count(s[i])) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
