#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[607] = {0};
    int n, buf; cin >> n;
    for(int i = 0; i < n; i++) {
	cin >> buf;
	a[buf]++;
    }
    int cnt = 0;
    for(int i = 1; i <= 600; i++)
	if(a[i] > 0)
	    cnt++;
    cout << cnt << endl;
    return 0;
}
