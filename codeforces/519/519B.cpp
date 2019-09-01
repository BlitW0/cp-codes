#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, buf; cin >> n;
    map <int, int> a, b, c;
    set <int> x, y;

    for(int i = 0; i < n; i++)
	cin >> buf, a[buf]++, x.insert(buf);
    for(int i = 0; i < n - 1; i++)
	cin >> buf, b[buf]++, y.insert(buf);
    for(int i = 0; i < n - 2; i++)
	cin >> buf, c[buf]++;

    set <int> :: iterator it;
    for(it = x.begin(); it != x.end(); it++)
	if(a[*it] != b[*it]) {
	    cout << *it << '\n';
	    break;
	}
    for(it = y.begin(); it != y.end(); it++)
	if(b[*it] != c[*it]) {
	    cout << *it << '\n';
	    break;
	}
    return 0;
}
