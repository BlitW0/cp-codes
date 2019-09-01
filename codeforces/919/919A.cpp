#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    double at[5007], a, b;
    for(int i = 0; i < n; i++)
    {
	cin >> a >> b;
	at[i] = a/b;
    }
    sort(at, at + n);
    printf("%.8f\n", at[0]*m);
    return 0;
}
