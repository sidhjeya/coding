from typing import List

def twoSum(numbers: List[int], target: int) -> List[int]:
    """
    Find two numbers in a sorted array that add up to a specific target.

    Args:
    numbers (List[int]): A 1-indexed sorted array of integers in non-decreasing order.
    target (int): The target sum to find.

    Returns:
    List[int]: A list containing the 1-indexed positions of the two numbers that add up to the target.

    Note: This function assumes that there is exactly one solution and the same element cannot be used twice.
    """

    # Initialize two pointers
    left = 0  # Points to the start of the array
    right = len(numbers) - 1  # Points to the end of the array

    while left < right:
        # Calculate the current sum
        current_sum = numbers[left] + numbers[right]

        if current_sum == target:
            # We found the pair that adds up to the target
            # Return their indices (adding 1 because the array is 1-indexed)
            return [left + 1, right + 1]
        elif current_sum < target:
            # If the sum is too small, move the left pointer to the right
            # This increases the sum as the array is sorted in non-decreasing order
            left += 1
        else:
            # If the sum is too large, move the right pointer to the left
            # This decreases the sum as the array is sorted in non-decreasing order
            right -= 1

    # This line should never be reached if the input is valid
    # (as the problem guarantees exactly one solution)
    return []  # or raise an exception

# Example usage
numbers = [2, 7, 11, 15]
target = 9
result = twoSum(numbers, target)
print(f"Input array: {numbers}")
print(f"Target sum: {target}")
print(f"Indices of the two numbers: {result}")