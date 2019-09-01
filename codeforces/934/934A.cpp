#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    long long a[57], b[57];
    for(int i = 0; i < n; i++)
	cin >> a[i];
    for(int i = 0; i < m; i++)
	cin >> b[i];
    long long max = -2e18;
    int ind;
    for(int i = 0; i < n; i++)
	for(int j = 0; j < m; j++)
	    if(a[i]*b[j] > max) {
		max = a[i]*b[j];
		ind = i; }
    max = -2e18;
    for(int i = 0; i < n; i++) {
	if(i == ind) continue;
	for(int j = 0; j < m; j++)
	    if(a[i]*b[j] > max)
		max = a[i]*b[j];
    }
    cout << max << endl;
}