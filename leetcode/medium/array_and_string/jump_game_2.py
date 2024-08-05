# You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].

# Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at nums[i], you can jump to any nums[i + j] where:

# 0 <= j <= nums[i] and
# i + j < n
# Return the minimum number of jumps to reach nums[n - 1]. The test cases are generated such that you can reach nums[n - 1].


def jump(nums):
    if len(nums) <= 1:
        return 0
    
    jumps = 0
    current_reach = 0
    next_reach = 0
    
    for i in range(len(nums) - 1):  # We don't need to jump from the last index
        next_reach = max(next_reach, i + nums[i])
        
        if i == current_reach:
            jumps += 1
            current_reach = next_reach
            
            if current_reach >= len(nums) - 1:
                break
    
    return jumps
print(jump([2,3,1,1,4]))