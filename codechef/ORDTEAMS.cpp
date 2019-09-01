#include <bits/stdc++.h>
using namespace std;

struct skill
{
    int hw, in, per;
};

bool check(skill a, skill b)
{
    if(a.hw == b.hw && a.in == b.in && a.per == b.per)
	return false;
    else if((a.hw >= b.hw && a.in >= b.in && a.per >= b.per) || (a.hw <= b.hw && a.in <= b.in && a.per <= b.per))
	return true;
    else
	return false;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
	skill s[3];
	for(int i = 0; i < 3; i++)
	    cin >> s[i].hw >> s[i].in >> s[i].per;
	if(!check(s[0], s[1]) || !check(s[1], s[2]) || !check(s[2], s[0]))
	    cout << "no\n";
	else
	    cout << "yes\n";
    }
    return 0;
}
