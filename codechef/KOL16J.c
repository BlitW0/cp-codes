#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
	int n, cnt[501] = {0};
	scanf("%d", &n);
	int i, buf, cliche = 1;
	for(i = 0; i < n; i++)
	{
	    scanf("%d", &buf);
	    if(buf == cliche) cliche++;
	    cnt[buf]++;
	}
	int ok = 1;
	if(cliche == n + 1) ok = 0;
	for(i = 1; i <= n; i++)
	    if(cnt[i] != 1) {
		ok = 0; break; }
	if(!ok) printf("no\n");
	else printf("yes\n");
    }
    return 0;
}
