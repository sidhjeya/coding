def letter_combinations(digits):
    # Check if the input is empty, return an empty list if true
    if not digits:
        return []
    
    # Mapping of digits to corresponding letters
    digit_to_letters = {
        '2': 'abc', '3': 'def', '4': 'ghi', '5': 'jkl', '6': 'mno',
        '7': 'pqrs', '8': 'tuv', '9': 'wxyz'
    }
    
    # This function will generate combinations recursively
    def backtrack(index, current_combination):
        # If the current combination is of the same length as digits, we have a valid combination
        if index == len(digits):
            combinations.append(current_combination)
            return
        
        # Get the letters that the current digit maps to
        letters = digit_to_letters[digits[index]]
        # Loop through these letters and recurse
        for letter in letters:
            backtrack(index + 1, current_combination + letter)
    
    # List to hold the final combinations
    combinations = []
    # Start the backtracking process from the first digit
    backtrack(0, "")
    
    return combinations

# Example usage:
digits = "56"
print(letter_combinations(digits))
