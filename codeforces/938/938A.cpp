#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    set <char> vo; int fl;
    vo.insert('a'); vo.insert('e');
    vo.insert('i'); vo.insert('o');
    vo.insert('u'); vo.insert('y');
    char prev, c; cin >> prev;
    cout << prev;
    for(int i = 1; i < n; i++)
    {
	cin >> c;
	if(vo.count(c) && vo.count(prev))
	    continue;
	else cout << c;
	prev = c;
    }
    cout << endl;
    return 0;
}
