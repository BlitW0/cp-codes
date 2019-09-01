#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n, k; cin >> n >> k;
	int a[10007];
	for(int i = 0; i < n; i++)
	    cin >> a[i];
	sort(a, a + n); long long sum = 0;
	for(int i = k; i < n - k; i++)
	    sum += a[i];
	printf("%lf\n", sum / (double) (n - 2*k));
    }
    return 0;
}
