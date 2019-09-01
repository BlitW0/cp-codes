#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n, k; cin >> n >> k;
	int c = 0, b = 0;
	string s; cin >> s;
	for(int i = 0; i < s.length(); i++) {
	    if(s[i] >= 'a' && s[i] <= 'z') c++;
	    else b++;
	}
	if(c <= k && b <= k) cout << "both\n";
	else if(c > k) {
	    if(b <= k) cout << "chef\n";
	    else cout << "none\n";
	} else if(b > k) {
	    if(c <= k) cout << "brother\n";
	    else cout << "none\n";
	}
    }
    return 0;
}
