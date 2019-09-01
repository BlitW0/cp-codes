#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;
    if(s.length() < 26) {
	cout << -1 << endl;
	return 0;
    }
    char ser = 'z';
    for(int i = s.length() - 1; i >= 0; i--) {
	if(s[i] <= ser) {
	    s[i] = ser;
	    ser--;
	}
	if(ser == 'a' - 1)
	    break;
    }
    if(ser == 'a' - 1) cout << s << endl;
    else cout << -1 << endl;
    return 0;
}
