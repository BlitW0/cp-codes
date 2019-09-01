#include <stdio.h>

int min(int a, int b)
{
    return a<b?a:b;
}

int main()
{
    int n, a, b, i;
    scanf("%d %d %d", &n, &a, &b);
    int max = -1;
    for(i = 1; i < n; i++)
	if(min(a/i, b/(n - i)) > max)
	    max = min(a/i, b/(n - i));
    printf("%d\n", max);
}
