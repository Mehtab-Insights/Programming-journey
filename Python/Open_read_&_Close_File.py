f=open("demo.txt")
data=f.read() #Reads entire files
line=f.readline() #Reads one line cut at a time
print(line)
f.close()


#Writing to a File:

# k=open(r"C:\Users\mehta\Desktop\Codeing\Python\demo.txt","w")
# k.write("Hi my name is Mehtab")  # over writes the entire file

# Append "Add at the end"

# f=open(r"C:\Users\mehta\Desktop\Codeing\Python\demo.txt","a")
# f.write("\n And i enjoy it more than i says") #adds to the file 


# Make a file
# f=open("simple.txt","w")  Theyt make a file
# f.close()

# With Syntax
# with open("demo.txt","r") as f:
#     data=f.read()
#     print(data)

# Writing With Syntax

# with open("demo.txt","w") as f:
#     data=f.write("Hello")

# Deleting File

# import os
# os.remove("simple.txt")