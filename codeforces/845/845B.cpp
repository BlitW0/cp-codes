#include <bits/stdc++.h>
using namespace std;

int replaced(char *str, int sum1, int sum2)
{
    int cnt = 0;
    if(sum1 < sum2)
    {
	int i = 0, j = 5;
	while(sum1 < sum2)
	{
	    if(9 - str[i] + '0' > str[j] - '0')
		sum1 += 9 - str[i++] + '0';
	    else
		sum2 -= str[j--] - '0';
	    cnt++;
	}
    }
    else
    {
	int i = 3, j = 2;
	while(sum2 < sum1)
	{
	    if(9 - str[i] + '0' > str[j] - '0')
		sum2 += 9 - str[i++] + '0';
	    else
		sum1 -= str[j--] - '0';
	    cnt++;
	}
    }
    return cnt;
}

int main()
{
    char str[7]; cin >> str;
    sort(str, str + 3); sort(str + 3, str + 6);
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < 3; i++)
    {
	sum1 += str[i] - '0';
	sum2 += str[3 + i] - '0';
    }
    cout << replaced(str, sum1, sum2) << endl;
    return 0;
}
