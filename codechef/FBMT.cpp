#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	map <string, int> m;
	string a = "1", b = "-1", str;
	for(int i = 0; i < n; i++) {
	    cin >> str;
	    if(a == "1") a = str;
	    if(b == "-1" && str != a) b = str;
	    m[str]++;
	}
	if(m[a] == m[b]) cout << "Draw";
	else if(m[a] > m[b]) cout << a;
	else cout << b;
	cout << '\n';
    }
    return 0;
}
