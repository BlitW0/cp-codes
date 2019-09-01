#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
	char day[][7] = {"mon", "tues", "wed", "thurs", "fri", "sat", "sun"};
	int n; char str[7];
	scanf("%d %s", &n, str);
	int occ[7] = {0}, i = 0, j;
	while(strcmp(str, day[i]) != 0) i++;
	for(j = 0; j < n; j++, i++)
	    occ[i%7]++;
	for(i = 0; i < 7; i++)
	    printf("%d ", occ[i]);
	printf("\n");
    }
    return 0;
}
