#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k; cin >> n >> k;
    if(k > 43)
	cout << "No\n";
    else
    {
	int a[43] = {0};
	for(long long i = 1; i <= k; i++)
	{
	    a[n%i]++;
	    if(a[n%i] > 1) {
		cout << "No\n"; return 0; }
	}
	cout << "Yes\n";
    }
    return 0;
}
