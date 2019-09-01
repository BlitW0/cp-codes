#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
	
	string s; cin >> s;

	int cnt[2] = {0};
	for(int i = 0; i < s.length(); i++)
	    cnt[s[i] - '0']++;

	bool ok = (cnt[1] != 0);
	for(int i = 0; i < s.length(); ) {
	    while(s[i] == '0')
		i++;
	    while(s[i] == '1')
		i++, cnt[1]--;
	    if(cnt[1]) {
		ok = 0;
		break;
	    }
	}

	(ok) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
