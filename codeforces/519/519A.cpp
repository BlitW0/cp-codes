#include <bits/stdc++.h>
using namespace std;

int main()
{
    string board[8];
    for(int i = 0; i < 8; i++)
	cin >> board[i];

    map <char, int> val;
    val['q'] = 9, val['r'] = 5, val['b'] = 3;
    val['n'] = 3, val['p'] = 1;

    int white = 0, black = 0;
    for(int i = 0; i < 8; i++)
	for(int j = 0; j < board[i].length(); j++) {
	    char c = board[i][j];
	    if(c == '.')
		continue;
	    else {
		if(c >= 'A' && c <= 'Z') white += val[tolower(c)];
		else black += val[c];
	    }
	}

    if(white == black) cout << "Draw\n";
    else if(white > black) cout << "White\n";
    else cout << "Black\n";
    return 0;
}
