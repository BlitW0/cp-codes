#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    string s[507];

    for(int i = 0; i < r; i++)
	cin >> s[i];

    bool ok = 1;
    for(int i = 0; i < r; i++) {
	for(int j = 0; j < c; j++) {
	    if(s[i][j] == 'S') {
		if(i - 1 >= 0 && i - 1 < r) {
		    if(s[i - 1][j] == 'W') ok = 0;
		    if(s[i - 1][j] == '.') s[i - 1][j] = 'D';
		}
		if(i + 1 >= 0 && i + 1 < r) {
		    if(s[i + 1][j] == 'W') ok = 0;
		    if(s[i + 1][j] == '.') s[i + 1][j] = 'D';
		}
		if(j - 1 >= 0 && j - 1 < c) {
		    if(s[i][j - 1] == 'W') ok = 0;
		    if(s[i][j - 1] == '.') s[i][j - 1] = 'D';
		}
		if(j + 1 >= 0 && j + 1 < c) {
		    if(s[i][j + 1] == 'W') ok = 0;
		    if(s[i][j + 1] == '.') s[i][j + 1] = 'D';
		}
	    }
	    if(!ok) break;
	}
	if(!ok) break;
    }
    if(!ok) {
	cout << "No\n";
    } else {
	cout << "Yes\n";
	for(int i = 0; i < r; i++)
	    cout << s[i] << '\n';
    }
    return 0;
}
