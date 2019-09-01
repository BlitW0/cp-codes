#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int num[n];
    for(int i = 0; i < n; i++)
	cin >> num[i];
    sort(num, num + n);
    int cost = 0;
    for(int i = 1; i < n; i++)
    {
	if(num[i] <= num[i - 1])
	{
	    cost += num[i - 1] - num[i] + 1;
	    num[i] = num[i - 1] + 1;
	}
    }
    cout << cost << endl;
    return 0;
}
