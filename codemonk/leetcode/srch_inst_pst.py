from typing import List
class Solution:
    def __init__(self) :
       pass
    def searchInsert(self, nums: List[int], target: int) -> int:
        for i in range(len(nums)-1):
            if((nums[i]< target) and (target < nums[i+1])):
                return i+1
            elif(nums[i]==target):
                return i
            elif(target == nums[i+1]):
                return i+1
          
        return len(nums)
            
if __name__=="__main__":
    sol=Solution()
    print(sol.searchInsert([1,3,5,6],7))