class cal:
    def __init__(self,n1,n2):
        self.num1=n1
        self.num2=n2
    def add(self):
        print("Name:",self.num1+self.num2)
        print("Register Number:",self.num1-self.num2)
        
t1=cal(1,2)
t2=cal(2,3)
t1.add()
