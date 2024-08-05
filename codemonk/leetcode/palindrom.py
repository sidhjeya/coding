
class Solution:
    def isPalindrome(self, s: str) -> bool:
        str1=''
        for i in s:
            if(i.isalpha()):
                str1=str1+i.lower()
        f=0
        l=len(str1)-1
        while(f!=l):
            if(str1[f]!=str1[l]):
                return False
            f=f+1
            l=l-1
        return True

            
if __name__ == "__main__":
    str="race a car"
    sol=Solution()
    print(sol.isPalindrome(str))