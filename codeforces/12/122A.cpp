#include <bits/stdc++.h>
using namespace std;

bool lucky(int n) {
    while(n > 0) {
	if(n%10 != 4 && n%10 != 7)
	    return 0;
	n /= 10;
    }
    return 1;
}

int main() {
    int n; cin >> n;
    if(lucky(n)) {
	cout << "YES\n";
	return 0;
    }
    for(int i = 4; i <= n/2; i++)
	if(lucky(i) && n%i == 0) {
	    cout << "YES\n";
	    return 0;
	}
    cout << "NO\n";
    return 0;
}
