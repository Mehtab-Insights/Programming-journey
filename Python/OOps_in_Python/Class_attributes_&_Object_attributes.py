class Car:
    # Class attribute
    wheels = 4  

    def __init__(self, color):
        # Object attribute
        self.color = color

# Create two objects
c1 = Car("Red")
c2 = Car("Blue")

print("Class Attribute:", Car.wheels)   # same for all
print("c1 -> Color:", c1.color)         # unique
print("c2 -> Color:", c2.color)         # unique
