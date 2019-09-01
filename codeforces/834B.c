#include <stdio.h>

int main()
{
    char str[1000007]; int n, k;
    scanf("%d %d %s", &n, &k, str);
    int a[26] = {0}, open[26] = {0};
    for(int i = 0; str[i] != '\0'; i++)
	a[str[i] - 'A']++;
    for(int i = 0; str[i] != '\0'; i++)
    {
	open[str[i] - 'A'] = 1;
	a[str[i] - 'A']--;
	int gate = 0, j;
	for(j = 0; j < 26; j++)
	    if(open[j])
		gate++;
	if(gate > k) {
	    printf("YES\n");
	    return 0; }
	if(!a[str[i] - 'A']) open[str[i] - 'A'] = 0;
    }
    printf("NO\n");
    return 0;
}
