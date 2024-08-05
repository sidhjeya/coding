def minSubArrayLen(target, nums):
    n = len(nums)  # Get the length of the input array
    left = 0  # Initialize the left boundary of the sliding window
    current_sum = 0  # Initialize the sum of the current window
    min_length = float('inf')  # Initialize the minimum length with infinity
    
    for right in range(n):
        current_sum += nums[right]  # Expand the window by adding the current element to the sum
        
        # While the current sum is greater than or equal to the target
        while current_sum >= target:
            # Update the minimum length
            min_length = min(min_length, right - left + 1)
            # Shrink the window from the left by subtracting the left element from the sum
            current_sum -= nums[left]
            # Move the left boundary to the right
            left += 1
    
    # If min_length was updated, return it. Otherwise, return 0.
    return min_length if min_length != float('inf') else 0

# Example usage
target = 7
nums = [2, 3, 1, 2, 4, 3]
print(minSubArrayLen(target, nums))  # Output: 2
