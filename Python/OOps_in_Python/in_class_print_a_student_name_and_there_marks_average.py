class stduent:
    def __init__(self,name,marks):
        self.name=name
        self.marks=marks
    def average(self):
        sum=0
        for val in self.marks:
            sum+=val
        print("The student name is",self.name,"and the student average is ",sum/3)    

a1=stduent("Mehtab",[30,50,80])
a1.average()