#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;

    int ans = 0;
    while(n > 0 && m > 0) {
	if(n < m) {
	    n--;
	    if(m < 2) break;
	    else m -= 2;
	} else {
	    m--;
	    if(n < 2) break;
	    else n -= 2;
	}
	ans++;
    }
    
    cout << ans << '\n';
    return 0;
}
