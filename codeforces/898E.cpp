#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector <int> minsq, minnsq;
    int buf, x, root;
    int sq = 0, nsq = 0;
    for(int i = 0; i < n; i++)
    {
	cin >> buf; root = sqrt(buf);
	if(root*root == buf) 
	{
	    sq++;
	    if(buf == 0) minnsq.push_back(2);
	    else minnsq.push_back(1);
	}
	else
	{
	    nsq++; x = root + 1;
	    minsq.push_back(min(buf - root*root, x*x - buf));
	}
    }
    long long ans = 0;
    if(sq == nsq)
	ans = 0;
    else if(sq > nsq)
    {
	sort(minnsq.begin(), minnsq.end());
	for(int i = 0; i < sq - n/2; i++)
	    ans += minnsq[i];
    }
    else
    {
	sort(minsq.begin(), minsq.end());
	for(int i = 0; i < nsq - n/2; i++)
	    ans += minsq[i];
    }
    cout << ans << endl;
    return 0;
}
