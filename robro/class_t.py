class num:
    def __init__(self,x,y):
        self.a=x
        self.b=y
class add:
    def __init__(self,x,y):
        super().__init__(x,y)
        print(x+y)
if __name__=="__main__":
    addition = add(4,5)
    nummber =num(4,5)
         