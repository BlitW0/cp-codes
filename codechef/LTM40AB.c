#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int i; long long cnt = 0;
	int min = b<d?b:d;
	for(i = a; i <= min; i++)
	{
	    if(i < c) cnt += d - c + 1;
	    else cnt += d - i;
	}
	printf("%lld\n", cnt);
    }
    return 0;
}
