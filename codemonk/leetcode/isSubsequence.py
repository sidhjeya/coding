
class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        f=0
        l=len(s)-1
        i=0
        if(len(s) < 0 or len(t)):
            return False
        while (f< len(t)):
            if(s[i]==t[f]):
                if s[l]==t[f]:
                    return True
                i=i+1
                f=f+1

            else:
                f=f+1
        return False
            
        
if __name__ == "__main__":
    sol=Solution()
    print(sol.isSubsequence("","ahbgdc"))

    1,3,5,6,7,9,10 