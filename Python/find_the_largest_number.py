a=int(input("Enter first number "))
b=int(input("Enter second number "))
c=int(input("Enter third number "))

if(a>=b and a>=c):
    print("First number is largest ",a)
elif(b>=c):
    print("Second is largest ",b)
else:
    print("Third is largest ",c)