def factorial(x):
    if x==0 or x==1:
        return 1
    else:
        return x*factorial(x-1)

t=int(input())
if t>=1 and t<=1000:
    while(t!=0):
        a=int(input())
        b=str(factorial(a))
        c=len(b)-1
        count=0
        while(b[c]=='0'):
            count=count+1
            c=c-1
        print(count)
        t=t-1