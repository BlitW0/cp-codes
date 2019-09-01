#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	string day[] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
	int base = n - 1900;
	for(int i = 1900; i < n; i++)
	    if(i%400 == 0 || (i%4 == 0 && i%100 != 0))
		base++;
	base %= 7;
	cout << day[base] << '\n';
    }
    return 0;
}
