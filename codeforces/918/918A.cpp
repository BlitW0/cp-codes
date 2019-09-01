#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int fib[1001] = {0};
    int a = 1, b = 1, c;
    fib[1] = 1;
    while(1)
    {
	c = a + b;
	a = b;
	b = c;
	if(c > 1000) break;
	fib[c] = 1;
    }
    for(int i = 1; i <= n; i++)
    {
	if(fib[i]) cout << "O";
	else cout << "o";
    }
    cout << endl;
    return 0;
}
