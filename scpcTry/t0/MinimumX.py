import math
t = int(input())
while(t):
    a = int(input())
    print((2 ** int(math.log(a, 2))) - 1)
    t-=1
