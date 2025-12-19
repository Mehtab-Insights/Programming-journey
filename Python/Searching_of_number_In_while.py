tup=(1,3,6,9,13,15)
x=int(input("Enter number to find : "))
i=0
while i<len(tup):
    if(tup[i] == x):
        print("Found at idx",i)
    i+=1    