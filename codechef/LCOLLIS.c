#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
	int n, m;
	scanf("%d %d", &n, &m);
	char a[17][17], i, j;
	for(i = 0; i < n; i++)
	    scanf("%s", a[i]);
	int cnt = 0, ones;
	for(j = 0; j < m; j++)
	{
	    ones = 0;
	    for(i = 0; i < n; i++)
		if(a[i][j] == '1')
		    ones++;
	    cnt += (ones*(ones - 1))/2;
	}
	printf("%d\n", cnt);
    }
    return 0;
}
