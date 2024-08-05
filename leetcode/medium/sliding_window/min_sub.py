# Given an array of positive integers nums and a positive integer target, return the minimal length of a 
# subarray
#  whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.


def minSubArrayLen(target: int, nums: list[int]) -> int:
    n = len(nums)
    left = 0
    current_sum = 0
    min_length = float('inf')
    
    for right in range(n):
        current_sum += nums[right]
        
        while current_sum >= target:
            min_length = min(min_length, right - left + 1)
            current_sum -= nums[left]
            left += 1
    
    return min_length if min_length != float('inf') else 0
print(minSubArrayLen(7, [2,3,1,2,4,3])) 