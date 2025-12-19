# Question 2:

# Write a Python program that takes a tuple of numbers and prints all the unique elements (remove duplicates) using a set.

# 🔹 Example:
# Input tuple → (2, 4, 4, 6, 2, 8)
# # Output → {2, 4, 6, 8}

# Tuple with duplicate numbers
numbers = (2, 4, 4, 6, 2, 8)

# Convert tuple to set (this removes duplicates automatically)
unique_numbers = set(numbers)

print("Unique elements are:", unique_numbers)
