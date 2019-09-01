#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
	int n, m;
	scanf("%d %d", &n, &m);
	int an[1000001] = {0}, am[1000001] = {0};
	int buf, i;
	for(i = 0; i < n; i++)
	{
	    scanf("%d", &buf);
	    an[buf]++;
	}
	for(i = 0; i < m; i++)
	{
	    scanf("%d", &buf);
	    am[buf]++;
	}
	int cnt = 0;
	for(i = 1; i <= 1000000; i++)
	    if(an[i] && am[i])
		cnt++;
	printf("%d\n", cnt);
    }
    return 0;
}
