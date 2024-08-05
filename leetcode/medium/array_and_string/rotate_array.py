def rotate(nums, k):
    n = len(nums)
    k = k % n  # Handle cases where k > n
    
    def reverse(start, end):
        while start < end:
            nums[start], nums[end] = nums[end], nums[start]
            start += 1
            end -= 1
    
    # Reverse the whole array
    reverse(0, n - 1)
    
    # Reverse the first k elements
    reverse(0, k - 1)
    
    # Reverse the rest
    reverse(k, n - 1)
    return  nums
print(rotate([1,2,3,4,5,6,7],3))