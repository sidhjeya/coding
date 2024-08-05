class Solution:
    def __init__(self) :
        self.h=[]    
        self.ls_wh=0    
    def lengthOfLastWord(self, s: str) -> int:
        for i in range(len(s)):
            if(s[i]==" " or i== len(s)-1):
                self.h.append(s[self.ls_wh:i])
                self.ls_wh=i+1
        if(s[len(s)-1]!=" "):
            return len(self.h[len(self.h)-1])+1
        else:
            return len(self.h[len(self.h)-1])
if __name__=="__main__":
    sol=Solution()
    print(sol.lengthOfLastWord("  fly me   to   the moon "))