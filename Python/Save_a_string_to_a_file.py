text = input("Enter some text: ")
with open("output.txt", "w") as f:
    f.write(text)
print("Text saved to output.txt")
