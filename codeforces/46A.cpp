#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int pos = 2, gap = 2;
    for(int i = 0; i < n - 1; i++) {
	cout << pos << " ";
	if(pos + gap == n) { pos = n; gap++; }
	else pos = (pos + (gap++))%n;
    }
    cout << endl;
    return 0;
}
