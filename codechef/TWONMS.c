#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
	int a, b, n;
	scanf("%d %d %d", &a, &b, &n);
	if(n%2)
	    printf("%d\n", ((2*a)>b?(2*a):b)/((2*a)<b?(2*a):b));
	else
	    printf("%d\n", (a>b?a:b)/(a<b?a:b));
    }
    return 0;
}
