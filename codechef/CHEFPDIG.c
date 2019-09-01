#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
	char n[1000010];
	scanf("%s", n);
	int i, cnt[10] = {0};
	for(i = 0; n[i] != '\0'; i++)
	    cnt[n[i] - '0']++;
	for(i = 65; i <= 90; i++)
	{
	    int tmp = i, ok = 1, dig[2], j = 0;
	    while(tmp > 0)
	    {
		dig[j++] = tmp%10;
		tmp /= 10;
	    }
	    if((dig[0] == dig[1] && cnt[dig[0]] < 2) || cnt[dig[0]] == 0 || cnt[dig[1]] == 0) 
		ok = 0;
	    if(ok) printf("%c", i);
	}
	printf("\n");
    }
    return 0;
}
