#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y; cin >> x >> y; y--;
    if(y < 0 || (y == 0 && x > 0) || x < y)
	cout << "No\n";
    else if((x - y)%2 == 0)
	cout << "Yes\n";
    else
	cout << "No\n";
    return 0;
}
