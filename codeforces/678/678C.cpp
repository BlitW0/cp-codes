#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    if(a == 0) return b;
    else return gcd(b % a, a);
}

int main() {
    ll n, a, b, p, q;
    scanf("%lld %lld %lld %lld %lld", &n, &a, &b, &p, &q);
    ll x, y, lcm = (a * b) / gcd(a, b);
    (p > q) ? (x = a, y = b) : (x = b, y = a);
    printf("%lld\n", max(p, q) * (n / x) + min(p, q) * (n / y - n / lcm));
    return 0;
}