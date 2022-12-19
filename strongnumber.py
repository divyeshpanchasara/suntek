a=input()
fact=1
num=0

def factorial(x):
    if x==0 or x==1:
        return 1
    else:
        return x*factorial(x-1)

for i in range(len(a)):
    num=num+factorial(int(a[i]))

if int(a)==int(num):
    print("Strong Number")
else:
    print("Not a Strong Number")