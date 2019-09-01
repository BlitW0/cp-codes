#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    string an[1001], aip[1001];
    string bn[1001], bip[1001], c[1001];
    for(int i = 0; i < n; i++)
	cin >> an[i] >> aip[i];
    for(int i = 0; i < m; i++)
    {
	cin >> bn[i] >> bip[i];
	for(int j = 0; j < n; j++)
	    if(aip[j] + ";" == bip[i]) {
		c[i] = "#" + an[j]; break; }
    }
    for(int i = 0; i < m; i++)
	cout << bn[i] << " " << bip[i] << " " << c[i] << endl;
    return 0;
}
