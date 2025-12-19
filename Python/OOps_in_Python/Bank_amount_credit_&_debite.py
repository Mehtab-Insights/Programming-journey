class account:
    def __init__(self,bal,acc):
        self.balance=bal
        self.account_no=acc

    def debite(self,amount):
       self.balance -= amount
       print("Rs",amount,"Was debited")
       print("Total balance is",self.get_bal())

    def credit(self,amount):
        self.balance += amount
        print("Rs",amount,"Was credit")
        print("Total balance is",self.get_bal())
           
    def get_bal(self):
        return self.balance




a1=account(10000,1122)
a1.credit(2000)
a1.debite(5000)