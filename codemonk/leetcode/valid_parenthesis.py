class Solution:
    def __init__(self):
        self.i=0
        self.dic1={
        
            "(" :")",
             ")" :"(",
            "{" :"}",
            "}" :"{",
            "[" : "]",
            "]" : "[",
        }
    def isValid(self, s: str) -> bool:
        while (len(s)//2 > self.i):
             if (self.dic1[s[self.i]]!=s[self.i+1]):
                return False
             self.i=self.i+2
        return True
if __name__ == "__main__":
    str1="{}{]()"
    sol=Solution( )
    sol.isValid(str1)
    