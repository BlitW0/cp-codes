#include <stdio.h>

int main()
{
    int n, m; scanf("%d %d", &n, &m);
    if(n < 27)
	printf("%d\n", m%(1<<n));
    else
	printf("%d\n", m);
    return 0;
}
