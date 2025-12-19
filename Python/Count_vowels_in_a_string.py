n=str(input("Enter a words : "))
vowels="aeiouAEIOU"
count=0
for char in n:
    if char in vowels:
        count+=1
print("Total vowels in in this sentence",count)        