from typing import List
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        
        for i  in range  (len(strs)-1):
                if(strs[i][:1] !=strs[i+1][:1]):
                     return ""
                while(strs[i]!=strs[i+1]):
                    if(len(strs[i]) > len(strs[i+1])):
                        a=strs[i]
                        strs[i]=a[:-1]
                    else :
                        b=strs[i+1]
                        strs[i+1]=b[:-1]
        return strs[i]

if __name__== "__main__":
    sol=Solution()  
    hi=sol.longestCommonPrefix(["cas","flow","flight"])
    print(hi)