#include <stdio.h>
#include <string.h>

int main()
{
    char name[101][107], ans[101][4];
    int n, i, j; scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
	scanf("%s", name[i]);
	int pres = 0;
	for(j = i - 1; j >= 0; j--)
	    if(!strcmp(name[i], name[j])) {
		pres = 1; break; }
	if(pres) strcpy(ans[i], "YES");
	else strcpy(ans[i], "NO");
    }
    for(i = 0; i < n; i++)
	printf("%s\n", ans[i]);
    return 0;
}
