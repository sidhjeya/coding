def convert(s: str, numRows: int) -> str:
    if numRows == 1:
        return s
    
    rows = [''] * numRows
    current_row = 0
    step = 1
    
    for char in s:
        rows[current_row] += char
        
        if current_row == 0:
            step = 1
        elif current_row == numRows - 1:
            step = -1
        
        current_row += step
    
    return ''.join(rows)
print(convert("PAYPALISHIRING",3))