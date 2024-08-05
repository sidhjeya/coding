def longest_common_prefix(strs):
    if not strs:
        return ""
    
    # Initialize the prefix with the first string in the array
    prefix = strs[0]
    
    # Iterate through the rest of the strings
    for string in strs[1:]:
        # Update the prefix to be the common part of prefix and the current string
        while string[:len(prefix)] != prefix and prefix:
            prefix = prefix[:-1]
        # Early exit if no common prefix
        if not prefix:
            break
            
    return prefix

# Example Usage:
print(longest_common_prefix(["flower", "flow", "flight"]))  # Output: "fl"
print(longest_common_prefix(["dog", "racecar", "car"]))     # Output: ""
