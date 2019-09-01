#include <stdio.h>

int main()
{
    int n, d; scanf("%d%d", &n, &d);
    int a; scanf("%d", &a);
    int cnt = 0; n--;
    while(n--)
    {
	int buf; scanf("%d", &buf);
	// printf("%d %d\n", a, buf);
	if(buf <= a)
	{
	    if(a - buf < d)
	    {
		cnt += 1;
		a = buf + d;
	    }
	    else
	    {
		int temp = cnt;
		cnt += (a - buf)/d + 1;
		a = buf + (cnt - temp)*d;
	    }
	}
	else a = buf;
	// printf("%d\n", cnt);
    }
    printf("%d\n", cnt);
    return 0;
}
