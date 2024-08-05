def removeDuplicates(nums):
    if not nums:
        return 0

    write_index = 0
    count = 1
    
    for i in range(1, len(nums)):
        if nums[i] == nums[i - 1]:
            count += 1
        else:
            count = 1
        
        if count <= 2:
            write_index += 1
            nums[write_index] = nums[i]

    return write_index + 1

# Example usage:
nums = [1, 2, 2, 2,3]
k = removeDuplicates(nums)
print(k)  # Output: 5
print(nums[:k])  # Output: [1, 1, 2, 2, 3]
