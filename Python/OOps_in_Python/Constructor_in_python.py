class Student:
    # constructor
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def display(self):
        print("Name:", self.name)
        print("Age:", self.age)

# object created → values set automatically by constructor
s1 = Student("Mehtab", 20)
s1.display()
