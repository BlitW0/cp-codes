#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--) {
	string c; getline(cin, c);
	int cnt = 0; string out;
	for(int i = 0; c[i] != '\0'; i++)
	    if(c[i] == ' ')
		cnt++;
	if(!cnt) {
	    c[0] = toupper(c[0]);
	    for(int i = 1; c[i] != '\0'; i++)
		c[i] = tolower(c[i]);
	    cout << c << endl;
	    continue;
	} else {
	    out = toupper(c[0]);
	    out += ". ";
	    for(int i = 0; c[i] != '\0'; i++) {
		if(!cnt) out += tolower(c[i]);
		if(c[i] == ' ') {
		    cnt--;
		    out += toupper(c[i + 1]);
		    if(cnt != 0) out += ". ";
		    else i++;
		}
	    }
	    cout << out << endl;
	}
    }
    return 0;
}
