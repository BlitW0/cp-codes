#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k; int n = 1;
    while(1)
    {
	int sum = 0; int buf = n;
	while(buf > 0)
	{
	    sum += buf%10;
	    buf /= 10;
	}
	if(sum == 10) k--;
	if(k == 0) break;
	n++;
    }
    cout << n << endl;
    return 0;
}
