a=int(input())
b=str(a)
if int(a)==int(b[::-1]):
    print("Palindrome")
else:
    print("Not a Palindrome")