#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, k;
    scanf("%lld %lld", &n, &k);
    printf("%lld\n", k * (n / k + 1));
    return 0;
}