#include <stdio.h>

int main()
{
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    int mval;
    if(n%m == 0) mval = (n*b)/m;
    else mval = (n/m + 1)*b;
    int i, min = (n*a)<mval?(n*a):mval;
    for(i = n; i >= 0; i--)
	if((n - i)%m == 0)
	    if(((n - i)*b)/m + i*a < min)
	    	min = i*a + ((n - i)*b)/m;
    printf("%d\n", min);
    return 0;
}
