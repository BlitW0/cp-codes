#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    int diff = abs(a - b);
    int min = (diff*(diff + 1))/2;
    for(int i = 1; i <= diff/2; i++) {
	int tmp = (i*(i + 1))/2 + ((diff - i)*(diff - i + 1))/2;
	if(tmp < min)
	    min = tmp;
    }
    cout << min << endl;
    return 0;
}
