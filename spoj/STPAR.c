#include <stdio.h>

int main()
{
    int n, i;
    while(1)
    {
	scanf("%d", &n);
	if(!n) break;
	int st[100007];
	int ser = 1, top = -1, buf;
	for(i = 0; i < n; i++)
	{
	    scanf("%d", &buf);
	    if(buf == ser)
	    {
		ser++;
		while(st[top] == ser && top != -1) {
		    top--; ser++; }
	    }
	    else st[++top] = buf;
	}
	if(top == -1) printf("yes\n");
	else printf("no\n");
    }
    return 0;
}
