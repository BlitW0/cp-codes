#include <stdio.h>
#include <limits.h>

int main()
{
    int n; scanf("%d", &n);
    int a[n], i, min = INT_MAX;
    for(i = 0; i < n; i++)
    {
	scanf("%d", a + i);
	if(a[i] < min) min = a[i];
    }
    int prev, ans = INT_MAX;
    for(prev = 0; a[prev] != min; prev++);
    for(i = prev + 1; i < n; i++)
    {
	if(a[i] == min)
	{
	    if(i - prev < ans)
		ans = i - prev;
	    prev = i;
	}
    }
    printf("%d\n", ans);
    return 0;
}
