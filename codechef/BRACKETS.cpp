#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	string s; cin >> s;
	int mx = 0, cnt = 0;
	for(int i = 0; i < s.length(); i++)
	    (s[i] == '(') ? cnt++ : cnt--, mx = max(mx, cnt);
	for(int i = 0; i < mx; i++) cout << '(';
	for(int i = 0; i < mx; i++) cout << ')';
	cout << '\n';
    }
    return 0;
}
