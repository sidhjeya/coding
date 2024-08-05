from typing import List
class Solution:
    
    def removeElement(self, nums: List[int], val: int) -> int:
        cnt=0
        for i in range (len(nums)):
            if(nums[i]!=val):
                  cnt=cnt+1

        print(nums)
if __name__ == "__main__":
    sol=Solution()
    sol.removeElement([3,2,2,4],3)