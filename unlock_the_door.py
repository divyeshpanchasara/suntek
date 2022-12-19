t=int(input())
for i in range(t):
    x,y=[int(x) for x in input().split()]
    result=1
    for i in range(x):
        result=result*y
        y=y-1
    print(result%1000000007)