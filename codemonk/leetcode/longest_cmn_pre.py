from typing import List
class Solution:
    def __init__(self):
        self.ccnt=0
        self.min=100
        self.j=0
        self.min_len=0
    def longestCommonPrefix(self, strs: List[str]) -> str:
        for i in range(len(strs)-1):
            if(len(strs[i]) > len(strs[i+1])):
                self.min_len=len(strs[i+1])
            while ((self.j< self.min_len) and strs[i][self.j]==strs[i+1][self.j]) :
                    self.j=self.j+1
                    self.ccnt=self.ccnt+1
                
            if(self.min > self.ccnt ) :   
                self.min=self.ccnt
            self.ccnt=0
            self.j=0
        print("the common pre fix is ->",strs[1][:self.min])
if __name__ == "__main__":
    sol=Solution(   )
    s=["flower","flow","flight"]
    sol.longestCommonPrefix(s)