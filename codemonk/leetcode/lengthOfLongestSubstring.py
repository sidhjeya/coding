class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        def dupl(self,left,right):
            s1=s[left:right]
            for i in s1:
                if(s1.count(i)>1):
                    return True
            
            return False
        right=1
        left=0
        max=0
        diff=right-left
        while(right< len(s)+1):
            if(dupl(self,left,right)):
                left=left+1

            else:
                if(max<(right-left)):
                    max=right-left
                right=right+1
        return max
            
if __name__ == "__main__" :
    sol=Solution()
    print(sol.lengthOfLongestSubstring("bbbb"))