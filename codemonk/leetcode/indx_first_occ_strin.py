class Solution:
    def __init__(self) :
         self.j=0
         self.h=[]
    def strStr(self, haystack: str, needle: str) :
        if (len(haystack)> len(needle)):
               big=haystack
               small=needle
        print("len(big)//len(small)->",len(big)//len(small))
        for i in range(len(big)//len(small)):
            print("big[self.j:len(small)+self.j->",big[self.j:len(small)+self.j])
            if (big[self.j:len(small)+self.j]==small):
                print(self.j)
                return self.j
                # self.h.append(self.j)     
            self.j=self.j+3



if __name__=="__main__":
    sol=Solution()
    sol.strStr("leetcode","leeto")