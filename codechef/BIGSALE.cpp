#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	int n; cin >> n; 
	double p[n + 1], q[n + 1], d[n + 1];
	for(int i = 0; i < n; i++)
	    cin >> p[i] >> q[i] >> d[i];
	double loss = 0;
	for(int i = 0; i < n; i++) {
	    double incr = p[i]*(1 + d[i]/100);
	    double decr = incr*(1 - d[i]/100);
	    loss += (p[i] - decr)*q[i];
	}
	printf("%.9lf\n", loss);
    }
    return 0;
}
