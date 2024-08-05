from typing import List

def maxArea(height: List[int]) -> int:
    """
    Find the maximum area of water that can be contained between two vertical lines.

    Args:
    height (List[int]): A list of integers where each integer represents the height of a vertical line.

    Returns:
    int: The maximum area of water that can be contained.

    The approach uses two pointers moving inwards from both ends of the list.
    """

    # Initialize two pointers
    left = 0  # Left pointer starts at the beginning of the list
    right = len(height) - 1  # Right pointer starts at the end of the list
    max_area = 0  # Variable to store the maximum area found

    while left < right:
        # Calculate the width between the two lines
        width = right - left
        
        # The height of the container is limited by the shorter line
        container_height = min(height[left], height[right])
        
        # Calculate the area
        area = width * container_height
        
        # Update max_area if we've found a larger area
        max_area = max(max_area, area)
        
        # Move the pointer pointing to the shorter line inwards
        # This is because:
        # 1. Moving the pointer of the taller line will never increase the area
        # 2. Moving the pointer of the shorter line might increase the area
        if height[left] < height[right]:
            left += 1
        else:
            right -= 1

    return max_area

# Example usage
height = [1,8,6,2,5,4,8,3,7]
result = maxArea(height)
print(f"Input heights: {height}")
print(f"Maximum water container area: {result}")