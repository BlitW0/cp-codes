#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int i, j, a[200007], b[200007], top = -1, buf, ser = 1;
    for(i = 0; i < k; i++)
    {
	scanf("%d", &b[i]);
	if(b[i] == ser)
	{
	    ser++;
	    while(a[top] == ser && top != -1) {
		top--; ser++; }
	}
	else
	{
	    if(b[i] > a[top] && top != -1) { printf("-1\n"); return 0; }
	    a[++top] = b[i];
	}
    }
    for(i = 0; i < k; i++)
	printf("%d ", b[i]);
    ser--;
    for(i = top; i >= 0; i--)
    {
	for(j = a[i] - 1; j > ser; j--)
	    printf("%d ", j);
	ser = a[i];
    }
    for(i = n; i > ser; i--)
	printf("%d ", i);
    printf("\n");
    return 0;
}
