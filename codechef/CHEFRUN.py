t = int(input())

while t:
    x = [int(x) for x in input().split()]
    t1 = (x[2] - x[0]) / x[3]
    t2 = (x[1] - x[2]) / x[4]
    if t1 == t2:
        print('Draw')
    elif t1 < t2:
        print('Chef')
    else:
        print('Kefa')
    t -= 1