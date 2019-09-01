#include <stdio.h>
#include <string.h>

int main()
{
    char a[100007], b[100007];
    scanf("%s %s", a, b);
    int i, alen = strlen(a), blen = strlen(b);
    int cnt = 0;
    if(alen < blen)
    {
	for(i = 0; i < alen; i++)
	{
	    if(alen%(i + 1) == 0 && blen%(i + 1) == 0)
	    {
		int j, ok = 1;
		for(j = 0; j < alen; j++)
		    if(a[j] != a[j%(i + 1)]) {
		    	ok = 0; break; }
		if(ok)
		{
		    int fl = 1;
		    for(j = 0; j < blen; j++)
		    	if(b[j] != a[j%(i + 1)]) {
			    fl = 0; break; }
		    if(fl) cnt++;
		}
	    }
	}
    }
    else
    {
	for(i = 0; i < blen; i++)
	{
	    if(blen%(i + 1) == 0 && alen%(i + 1) == 0)
	    {
		int j, ok = 1;
		for(j = 0; j < blen; j++)
		    if(b[j] != b[j%(i + 1)]) {
		    	ok = 0; break; }
		if(ok)
		{
		    int fl = 1;
		    for(j = 0; j < alen; j++)
			if(a[j] != b[j%(i + 1)]) {
			    fl = 0; break; }
		    if(fl) cnt++;
		}
	    }
	}
    }
    printf("%d\n", cnt);
    return 0;
}
