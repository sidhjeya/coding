class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        j = 0
        i = 0
        k = len(nums)-1
        ls=[]
        nums.sort()
        # print(nums)
        for i in range (len(nums)):
            j=i+1
            k = len(nums)-1
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            while (j<k):
                current=nums[i]+nums[j]+nums[k]
                if(current==0):
                    ls.append([nums[i],nums[j],nums[k]])
                    while(j< k and nums[j]==nums[j+1]):
                        j=j+1
                    while(j < k and nums[k]==nums[k-1]):
                        k=k-1
                    j=j+1
                    k=k-1                  
                elif(current<0):
                    j=j+1
                elif(current>0):
                    k=k-1
        return ls
        