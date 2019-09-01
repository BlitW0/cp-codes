#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string drink[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    int cnt = 0; string s;
    while(n--) {
	cin >> s;
	for(int i = 0; i < 11; i++)
	    if(drink[i] == s)
		cnt++;
	if(s[0] >= '0' && s[0] <= '9') {
	    int ten = 1; int num = 0;
	    for(int i = s.length() - 1; i >= 0; i--) {
		num += (s[i] - '0')*ten;
		ten *= 10;
	    }
	    if(num < 18)
		cnt++;
	}

    }
    cout << cnt << endl;
    return 0;
}
