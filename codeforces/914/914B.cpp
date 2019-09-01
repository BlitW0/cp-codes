#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[100007] = {0}, buf, max = -1;
    for(int i = 0; i < n; i++)
    {
	cin >> buf;
	a[buf]++;
	if(buf > max) max = buf;
    }
    int even = 1;
    for(int i = max; i > 0; i--)
	if(a[i]&1) {
	    even = 0; break; }
    if(even) cout << "Agasa";
    else cout << "Conan";
    cout << endl;
    return 0;
}
