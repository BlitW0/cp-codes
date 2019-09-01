#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int a[1001], i, j;
    for(i = 2; i <= n; i++)
    {
	int parent;
	scanf("%d", &parent);
	a[parent] = -1; a[i] = parent;
    }
    for(i = 1; i <= n; i++)
    {
	if(a[i] == -1)
	{
	    int cnt = 0;
	    for(j = i + 1; j <= n; j++)
		if(a[j] == i)
		    cnt++;
	    if(cnt < 3)
	    {
		printf("No\n");
		return 0;
	    }
	}
    }
    printf("Yes\n");
    return 0;
}
