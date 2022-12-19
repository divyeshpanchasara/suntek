a=input()
even=0
odd=0
for i in range(len(a)):
    if int(a[i])%2==0:
        even=even+1
    else:
        odd=odd+1

print("Odd:{} Even:{}".format(odd,even))