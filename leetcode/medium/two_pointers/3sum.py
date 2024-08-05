from typing import List

def threeSum(nums: List[int]) -> List[List[int]]:
    """
    Find all unique triplets in the array which gives the sum of zero.

    Args:
    nums (List[int]): An array of integers.

    Returns:
    List[List[int]]: A list of all unique triplets that sum to zero.
    """

    # Sort the array
    # This is crucial for our two-pointer approach and for avoiding duplicates
    nums.sort()
    
    result = []
    n = len(nums)

    # Iterate through the array, fixing one number at a time
    for i in range(n - 2):
        # Skip duplicates for the first number of the triplet
        if i > 0 and nums[i] == nums[i-1]:
            continue
        
        # Set two pointers
        left = i + 1
        right = n - 1
        
        while left < right:
            current_sum = nums[i] + nums[left] + nums[right]
            
            if current_sum == 0:
                # We found a triplet
                result.append([nums[i], nums[left], nums[right]])
                
                # Skip duplicates for the second number of the triplet
                while left < right and nums[left] == nums[left + 1]:
                    left += 1
                # Skip duplicates for the third number of the triplet
                while left < right and nums[right] == nums[right - 1]:
                    right -= 1
                
                # Move both pointers
                left += 1
                right -= 1
            
            elif current_sum < 0:
                # Sum is too small, increment left pointer
                left += 1
            
            else:
                # Sum is too large, decrement right pointer
                right -= 1

    return result

# Example usage
nums = [-1,0,1,2,-1,-4]
result = threeSum(nums)
print(f"Input array: {nums}")
print(f"Triplets summing to zero: {result}")