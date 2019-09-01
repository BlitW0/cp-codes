n = int(input())

dig = 0
while n:
    n //= 10
    dig += 1

if dig <= 3:
    print(dig)
else:
    print('More than 3 digits')