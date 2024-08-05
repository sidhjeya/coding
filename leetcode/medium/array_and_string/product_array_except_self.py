# Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

# The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

# You must write an algorithm that runs in O(n) time and without using the division operation.


def productExceptSelf(nums):
    n = len(nums)
    answer = [1] * n
    
    # First pass: Calculate left products
    left_product = 1
    for i in range(n):
        answer[i] = left_product
        left_product =left_product * nums[i]
    
    # Second pass: Calculate right products and combine with left products
    right_product = 1
    for i in range(n - 1, -1, -1):
        answer[i] =answer[i] * right_product
        right_product = right_product* nums[i]
    
    return answer
print(productExceptSelf([1,2,3,4]))