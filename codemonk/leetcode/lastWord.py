
class Solution:
    
    def lengthOfLastWord(self, s: str) -> int:
        list1=[]
        cnt=0
        for i, st in enumerate (s):
           if(st != " " ):
               list1.append(i)
        i=len(list1)  
        while(list1[i-1]-list1[i-2]==1):
         
            cnt=cnt+1
            i=i-1

        print(cnt+1)
        return 0

if __name__== "__main__":
    sol=Solution()
    sol.lengthOfLastWord("luffy is still joyboy")