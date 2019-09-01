#include <stdio.h>

int check(int num)
{
    int n = 2, x = num, cnt = 0, tmp;
    while(x != 1)
    {
	if(x/(float)n == x/n)
	{
	    x /= n; tmp = n;
	    if(n == num) return 0;
	    while(tmp > 0) {
		cnt += tmp%10;
		tmp /= 10; }
	}
	else n++;
    }
    tmp = num; int ans = 0;
    while(tmp > 0) {
	ans += tmp%10;
	tmp /= 10; }
    if(cnt == ans) return 1;
    else return 0;
}


int main()
{
    int n; scanf("%d", &n);
    int num = 1;
    while(n > 0)
    {
	if(check(num)) n--;
	num++;
    }
    printf("%d\n", num - 1);
    return 0;
}
