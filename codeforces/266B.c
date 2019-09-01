#include <stdio.h>

int main()
{
    int n, t; scanf("%d%d", &n, &t);
    char str[n]; scanf("%s", str);
    int i, j;
    for(j = 0; j < t; j++)
    {
	i = 0;
	while(i < n)
	{
	    if(str[i] == 'B' && str[i + 1] == 'G')
	    {
		str[i] = 'G';
		str[i + 1] = 'B';
		i += 2;
	    }
	    else
		i++;
	}
    }
    printf("%s\n", str);
    return 0;
}
