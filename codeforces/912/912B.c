#include <stdio.h>

int main()
{
    long long n, k, tmp;
    scanf("%lld %lld", &n, &k);
    int dig = 0; tmp = n;
    while(tmp > 0) {
	tmp >>= 1;
	dig++;   }
    long long ans = (k == 1)?n:((long long)(1)<<(dig)) - 1;
    printf("%lld\n", ans);
    return 0;
}
