#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; scanf("%d", &n);
    int f[n], i, buf;
    for(i = 0; i < n; i++)
    {
	scanf("%d", &buf);
	f[buf - 1] = i;
    }
    long long cnt = 0;
    for(i = 1; i < n; i++)
	cnt += abs(f[i] - f[i - 1]);
    printf("%lld\n", cnt);
}
