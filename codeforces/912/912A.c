#include <stdio.h>

int main()
{
    long long a, b; 
    scanf("%lld %lld", &a, &b);
    long long x, y, z; 
    scanf("%lld %lld %lld", &x, &y, &z);
    long long yellow = 2*x + y, blue = y + 3*z;
    long long ans = 0;
    if(yellow > a) ans += yellow - a;
    if(blue > b) ans += blue - b;
    printf("%lld\n", ans);
}
