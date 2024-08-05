class Solution(object):
    
    def __init__(self):
       self.j=1
    def isPalindrome(self, x):
     for i in range(len(x)//2):
        print("reverse lenght is ",len(x)-self.j)
        if(x[i]!=x[len(x)-self.j]): 
            print("not a palindrome")
            break
        self.j=self.j+1
if __name__=="__main__":
    x="121"
    print("length",len(x)//2)
    sol=Solution() 
    sol.isPalindrome(x)      

  