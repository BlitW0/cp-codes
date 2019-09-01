#include <stdio.h>

int main()
{
    char first[12], last[12];
    scanf("%s %s", first, last);
    int i;
    printf("%c", first[0]);
    for(i = 1; first[i] != '\0' && first[i] < last[0]; i++)
	printf("%c", first[i]);
    printf("%c\n", last[0]);
    return 0;
}
