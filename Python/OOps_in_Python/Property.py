class student:
    def __init__(self,phy,chem,math):
        self.phy=phy
        self.chem=chem
        self.math=math
        # self.percentage=str((self.phy+self.chem+self.math)/3)+"%"
    @property
    def percentage(self):
        return str((self.phy+self.chem+self.math)/3)+"%"
a1=student(90,98,100)
print(a1.percentage)
a1.phy=60
print(a1.phy)
print(a1.percentage)
