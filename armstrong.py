a =input()
num=0
for i in range(len(a)):
    num=num+(int(a[i])**len(a))
if int(a)==int(num):
    print("Armstrong number")
else:
    print("Not an Armstrong number")