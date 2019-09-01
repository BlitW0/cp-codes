#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t; cin >> t;
    while(t--)
    {
	vector <ll> a; ll buf, n;
	do {
	    if(cin >> buf)
		a.push_back(buf);
	} while(cin && cin.peek() != '\n');
	n = a.size() - 1; ll max = -1;
	sort(a.begin(), a.end());
	if(a[n] == n) cout << a[n - 1] << endl;
	else cout << a[n] << endl;
    }
    return 0;
}
