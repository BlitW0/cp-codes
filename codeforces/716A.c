#include <stdio.h>

int main()
{
    int n, c; scanf("%d%d", &n, &c);
    int t[n], i;
    for(i = 0; i < n; i++)
	scanf("%d", t + i);
    int cnt = 1;
    for(i = 1; i < n; i++)
    {
	if(t[i] - t[i - 1] > c) cnt = 1;
	else cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
