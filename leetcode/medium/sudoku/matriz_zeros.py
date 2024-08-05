def setZeroes(matrix):
    m, n = len(matrix), len(matrix[0])
    first_row_zero = any(matrix[0][j] == 0 for j in range(n))
    first_col_zero = any(matrix[i][0] == 0 for i in range(m))
    
    # Use the first row and first column to mark zero rows and columns
    for i in range(1, m):
        for j in range(1, n):
            if matrix[i][j] == 0:
                matrix[i][0] = 0
                matrix[0][j] = 0
    
    # Zero out cells based on the marks in the first row and first column
    for i in range(1, m):
        for j in range(1, n):
            if matrix[i][0] == 0 or matrix[0][j] == 0:
                matrix[i][j] = 0
    
    # Zero out the first row if needed
    if first_row_zero:
        for j in range(n):
            matrix[0][j] = 0
    
    # Zero out the first column if needed
    if first_col_zero:
        for i in range(m):
            matrix[i][0] = 0

# Example usage:
matrix = [
    [1, 1, 1],
    [1, 0, 1],
    [1, 1, 1]
]

setZeroes(matrix)

for row in matrix:
    print(row)
