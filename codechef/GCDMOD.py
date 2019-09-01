from math import gcd
mod = 1000000007

def mexp(x, y, m):
    res = 1
    while y:
        if y & 1:
            res = (res * x) % m
        x = (x * x) % m
        y >>= 1
    return res

for t in range(int(input())):
    a, b, n = map(int, input().split())
    d = abs(a - b)
    if d == 0:
        print((mexp(a, n, mod) + mexp(b, n, mod)) % mod)
    elif d == 1:
        print(1)
    else:
        print(gcd(d, (mexp(a, n, d) + mexp(b, n, d)) % d) % mod)