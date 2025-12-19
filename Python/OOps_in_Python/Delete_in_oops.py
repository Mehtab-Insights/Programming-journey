class student:
    def __init__(self,name):
        self.name=name

a1=student("Mehtab")
print(a1.name)
del a1
print(a1)