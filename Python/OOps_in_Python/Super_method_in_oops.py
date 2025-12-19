class Car:

    def __init__(self,type):
        self.type=type

    @staticmethod
    def start():
        print("Car started..")

    @staticmethod
    def stop():
        print("Car stop..")     

class ToyotaCar(Car):
    def __init__(self,name,type):
        self.name=name
        super().__init__(type) #Super Method to acess methods of the parent class
        super().start()
c1=ToyotaCar("Prius","Hyprids")
print(c1.type)