#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    set <int> s; set <int> :: iterator itr;
    s.insert(2); s.insert(3); s.insert(5); s.insert(7);
    s.insert(11); s.insert(13); s.insert(17); s.insert(19);
    s.insert(23); s.insert(29); s.insert(31); s.insert(37);
    s.insert(41); s.insert(43); s.insert(47);
    itr = s.find(n); itr++;
    (*itr == m) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
