#include <stdio.h>
#include <string.h>

int main()
{
    char a[107], b[107];
    scanf("%s %s", a, b);
    if(!strcmp(a, b))
	printf("%s\n", a);
    else
	printf("1\n");
    return 0;
}
