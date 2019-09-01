#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
	double s, sg, fg, d, t;
	cin >> s >> sg >> fg >> d >> t;
	double sp = ( 180.00 * d ) / t + 0.00 + s;
	double sdif = abs( sg - sp ), fdif = abs( fg - sp );
	if(sdif == fdif) cout << "DRAW";
	else if(sdif > fdif) cout << "FATHER";
	else cout << "SEBI";
	cout << '\n';
    }
    return 0;
}
