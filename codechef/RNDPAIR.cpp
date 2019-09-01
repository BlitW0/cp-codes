#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    int a[100];
    while(t--)
    {
	int n; cin >> n;
	for(int i = 0; i < n; i++)
	    cin >> a[i];
	sort(a, a + n);
	int max = a[n - 1] + a[n - 2];
	double prob = 0, total = (n*(n - 1))/2;
	for(int i = 0; i < n; i++)
	    for(int j = i + 1; j < n; j++)
		if(a[i] + a[j] == max )
		    prob++;
	printf("%8f\n", prob/total);
    }
    return 0;
}
