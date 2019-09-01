#include <stdio.h>

int main()
{
    char *ch = "hello", str[107];
    scanf("%s", str); int i, j;
    for(i = 0, j = 0; str[i] != '\0'; i++)
    {
	if(str[i] == ch[j]) j++;
	if(j == 5) break;
    }
    if(j == 5) printf("YES\n");
    else printf("NO\n");
    return 0;
}
