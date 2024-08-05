from typing import List
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        j=len(nums2)-1
        cnt=0
        for i in range (len(nums1)- 1, -1, -1):
            if (nums1[i]==0 and cnt< n):
                nums1.pop(i)
                cnt=cnt+1
        nums1=nums1+nums2   
        nums1.sort()
        print(nums1)
        
if __name__ =="__main__":
    nums1=[1,2,3,0,0,0]
    nums2=[2,5,6]
    sol=Solution()
    sol.merge(nums1,3,nums2,3)
