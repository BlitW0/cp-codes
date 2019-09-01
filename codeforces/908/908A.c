#include <stdio.h>

int main()
{
    char str[57], vowel[] = {'a', 'e', 'i', 'o', 'u'}; 
    scanf("%s", str); 
    int i, j, cnt = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
	if(str[i] >= 'a' && str[i] <= 'z') {
	    for(j = 0; j < 5; j++)
		if(str[i] == vowel[j])
		    cnt++; }
	else
	    if((str[i] - '0')&1)
		cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
