t = int(input())

frieza = 'frieza'
while t:
    s = input()
    x = 0; y = 0
    ans = ''
    for c in s:
        if c in frieza:
            x += 1
            if y: 
                ans += str(y); y = 0
        else:
            y += 1
            if x: 
                ans += str(x); x = 0
    if x:
        ans += str(x)
    else:
        ans += str(y)
    print(ans)
    t -= 1