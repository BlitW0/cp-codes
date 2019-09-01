#include <stdio.h>
#include <string.h>

int taxi[107], pizza[107], girl[107];
char name[107][27], str[10];
int n;

void printtaxi()
{
    int i, maxind = 0, max = -1, cnt = 0;
    for(i = 0; i < n; i++)
	if(taxi[i] > max) {
	    max = taxi[i]; maxind = i; }
    for(i = 0; i < n; i++)
	if(taxi[i] == max)
	    cnt++;
    printf("If you want to call a taxi, you should call: ");
    if(cnt == 1)
	printf("%s.\n", name[maxind]);
    else
    {
	for(i = 0; i < n && cnt > 1; i++)
	    if(taxi[i] == max) {
		printf("%s, ", name[i]); cnt--; }
	while(taxi[i] != max) i++;
	printf("%s.\n", name[i]);
    }
}

void printpizza()
{
    int i, maxind = 0, max = -1, cnt = 0;
    for(i = 0; i < n; i++)
    	if(pizza[i] > max) {
    		max = pizza[i]; maxind = i; }
    for(i = 0; i < n; i++)
		if(pizza[i] == max)
	    	cnt++;
    printf("If you want to order a pizza, you should call: ");
    if(cnt == 1)
		printf("%s.\n", name[maxind]);
    else
    {
		for(i = 0; i < n && cnt > 1; i++)
	    	if(pizza[i] == max) {
				printf("%s, ", name[i]); cnt--; }
		while(pizza[i] != max) i++;
		printf("%s.\n", name[i]);
    }
}

void printgirl()
{
    int i, maxind = 0, max = -1, cnt = 0;
    for(i = 0; i < n; i++)
    	if(girl[i] > max) {
    		max = girl[i]; maxind = i; }
    for(i = 0; i < n; i++)
		if(girl[i] == max)
	    	cnt++;
    printf("If you want to go to a cafe with a wonderful girl, you should call: ");
    if(cnt == 1)
		printf("%s.\n", name[maxind]);
    else
    {
		for(i = 0; i < n && cnt > 1; i++)
	    	if(girl[i] == max) {
				printf("%s, ", name[i]); cnt--; }
		while(girl[i] != max) i++;
		printf("%s.\n", name[i]);
    }
}

int main()
{
    int i, num; scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
	scanf("%d %s", &num, name[i]);
	while(num--)
	{
	    scanf("%s", str);
	    char pho[7]; int j, piz = 1, tax = 1;
	    pho[0] = str[0]; pho[1] = str[1];
	    pho[2] = str[3]; pho[3] = str[4];
	    pho[4] = str[6]; pho[5] = str[7];
	    pho[6] = '\0';
	    for(j = 0; j < 5; j++)
	    	if(pho[j] != pho[j + 1]) {
	    		tax = 0; break; }
	    for(j = 0; j < 5; j++)
	    	if(pho[j] <= pho[j + 1]) {
	    		piz = 0; break; }
	    if(tax)
			taxi[i]++;
		else
		{
			if(!piz) girl[i]++;
			else pizza[i]++;
		}
	}
	}
    printtaxi();
    printpizza();
    printgirl();
    return 0;
}
