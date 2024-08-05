class ListNode:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next
class Linkedlist:
    def __init__(self) :
        self.head =None
    def insert_at_begin(self,data):
        node = ListNode(data,self.head)
        self.head=node
    def insert_index (self,index,data):
        count = 0
        itr =self.head
        while itr :
            if count == index-1:    
                node=ListNode(data,itr.next)
                break
            itr.next=node
            count =count +1
    def print(self):
        if self.head is None:
            print("linked list is empty")
            return
        itr=self.head
        llstr = []
        while itr :
            llstr.append(itr.data)
            itr=itr.next
        print(llstr)
        # return llstr
    def insert_value(self,list1):
        for i in list1:
            self.insert_at_begin(i)     
    def sort (self):
        num = []
        num=self.print()     


        
if __name__ == "__main__" :
    l1=[1,2,4]
    l2=[1,3,4]
    sol=Linkedlist()
    sol.insert_value(l1)
    sol.insert_value(l2)    
    sol.print()