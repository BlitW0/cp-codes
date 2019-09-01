#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	string s; cin >> s;
	int sn = 0, m = 0, i;
	for(i = 0; i < s.length(); ) {
	    if((s[i] == 's' && s[i + 1] == 'm') || (s[i] == 'm' && s[i + 1] == 's'))
		i += 2, m++;
	    else if(s[i] == 's') sn++, i++;
	    else m++, i++;
	}
	if(sn == m) cout << "tie";
	else if(sn > m) cout << "snakes";
	else cout << "mongooses";
	cout << '\n';
    }
    return 0;
}
