# Program to find sum of first n numbers using while loop

n = int(input("Enter a number: "))
i = 1
sum = 0

while i <= n:
    sum += i   # same as sum = sum + i
    i += 1     # increment i

print("Sum of first", n, "numbers is:", sum)
