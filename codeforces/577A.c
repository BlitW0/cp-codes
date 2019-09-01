#include <stdio.h>

int main()
{
    int n, x; scanf("%d%d", &n, &x);
    int i, cnt = 0;
    for(i = 1; i <= n; i++)
	if(x/(float)i == x/i && x/i <= n)
	    cnt++;
    printf("%d\n", cnt);
    return 0;
}
