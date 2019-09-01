#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int t[n], i, j;
    for(i = 0; i < n; i++) 
	scanf("%d", t + i);
    if(n > 1) { i = 0; j = n - 1; }
    else { i = 0; j = 1; }
    int alice = t[0], bob = t[n - 1];
    while(j - i > 1)
    {
	if(alice <= bob) alice += t[++i];
	else bob += t[--j];
	// printf("%d %d\n", i, j);
    }
    printf("%d %d\n", i + 1, n - j);
    return 0;
}
