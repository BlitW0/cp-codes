#include <stdio.h>
#include <string.h>

int main()
{
    char month[][15] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char str[15]; int n, i;
    scanf("%s %d", str, &n);
    for(i = 0; i < 12; i++)
	if(strcmp(str, month[i]) == 0)
	    printf("%s\n", month[(i + n)%12]);
    return 0;
}
