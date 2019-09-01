#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n; scanf("%d", &n);
    int i, j; char str[7];
    int ten[10] = {0};
    char first[n];
    for(i = 0; i < n; i++)
    {
	scanf("%s", str);
	int n = strlen(str);
	first[i] = str[0];
	for(j = 0; str[j] != '\0'; j++)
	    ten[str[j] - 'a'] += (int) pow(10, n - 1 - j);
    }
    int zero = 0, min = 1, ans = 0;
    for(i = 0; i < 10; i++)
    {
	int maxind = 0;
	for(j = 1; j < 10; j++)
	    if(ten[j] > ten[maxind])
		maxind = j;
	int ok = 0;
	for(j = 0; j < n; j++)
	    if('a' + maxind == first[j]) {
		ok = 1; break; }
	if(!ok && !zero) zero = 1;
	else { ans += ten[maxind]*min; min++; }
	ten[maxind] = 0;
    }
    printf("%d\n", ans);
}
