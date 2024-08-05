def convert(s, numRows):
    if numRows == 1 or numRows >= len(s):
        return s
    
    # Create an array of empty strings for each row
    rows = [''] * numRows
    current_row = 0
    going_down = False
    
    # Iterate through each character in the input string
    for char in s:
        rows[current_row] += char
        # Change direction when we hit the top or bottom row
        if current_row == 0 or current_row == numRows - 1:
            going_down = not going_down
        current_row += 1 if going_down else -1
    
    # Concatenate all the rows to form the final output string
    return ''.join(rows)

# Example usage:
s = "PAYPALISHIRING"
numRows = 3

print(convert(s, numRows))  # Output: "PAHNAPLSIIGYIR"
