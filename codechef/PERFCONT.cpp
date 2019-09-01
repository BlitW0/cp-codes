#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	int n, p;
	cin >> n >> p;
	int cake = 0, hard = 0, buf;
	for(int i = 0; i < n; i++) {
	    cin >> buf;
	    if(buf >= p/2) cake++;
	    if(buf <= p/10) hard++;
	}
	(cake == 1 && hard == 2) ? cout << "yes\n" : cout << "no\n";
    }
    return 0;
}
