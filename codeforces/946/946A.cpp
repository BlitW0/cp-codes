#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int diff = 0;
    for(int i = 0; i < n; i++) {
	int buf; cin >> buf;
	if(buf > 0) diff += buf;
	else diff -= buf;
    }
    cout << diff << endl;
    return 0;
}
