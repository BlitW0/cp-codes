#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    while(n--) {
	int sum = 0, buf;
	for(int i = 0; i < 5; i++)
	    cin >> buf, sum += buf;
	if(!sum) cout << "Beginner";
	else if(sum == 1) cout << "Junior Developer";
	else if(sum == 2) cout << "Middle Developer";
	else if(sum == 3) cout << "Senior Developer";
	else if(sum == 4) cout << "Hacker";
	else cout << "Jeff Dean";
	cout << '\n';
    }
    return 0;
}
