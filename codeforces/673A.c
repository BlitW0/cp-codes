#include <stdio.h>

int main()
{
    int n, i; scanf("%d", &n);
    int ans = 15, buf;
    for(i = 0; i < n; i++)
    {
	scanf("%d", &buf);
	if(buf > ans) break;
	else ans = buf + 15;
    }
    printf("%d\n", ans<90?ans:90);
    return 0;
}
