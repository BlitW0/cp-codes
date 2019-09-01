#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	string s; cin >> s;
	int cnt = 0;
	for(int i = 0; i < 8; i++)
	    if((s[i%8] == '0' && s[(i + 1)%8] == '1') || (s[i%8] == '1' && s[(i + 1)%8] == '0'))
		cnt++;
	if(cnt <= 2) cout << "uniform\n";
	else cout << "non-uniform\n";
    }
    return 0;
}
