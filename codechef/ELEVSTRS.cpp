#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	double n, v1, v2;
	cin >> n >> v1 >> v2;
	if((n*sqrt(2.00))/v1 < (2.00*n)/v2) cout << "Stairs";
	else cout << "Elevator";
	cout << '\n';
    }
    return 0;
}
