a=int(input())
b=a
if a<0:
    b=-a

for i in range(1,b+1):
    print("{}*{}={}".format(a,i,a*i))