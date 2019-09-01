#include <stdio.h>

int main()
{
    char a[3], b[3];
    int x, cnt = 0;
    scanf("%d %s %s", &x, a, b);
    int hr = (a[0] - '0')*10 + a[1] - '0', min = (b[0] - '0')*10 + b[1] - '0';
    while(1)
    {
	if(hr%10 == 7 || min%10 == 7)
	    break;
	if(min < x) {
	    min += 60 - x;
	    if(!hr) hr = 23;
	    else hr--; }
	else min -= x;
	cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
