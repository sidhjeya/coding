def rotate(matrix):
    n = len(matrix)
    
    # Transpose the matrix
    for i in range(n):
        for j in range(i, n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
    
    # Reverse each row
    for i in range(n):
        matrix[i].reverse()

# Example usage:
matrix = [
    [1, 2, 3,44],
    [4, 5, 6,77],
    [7, 8, 9,99],
    [11, 22, 33,66]
]

rotate(matrix)

for row in matrix:
    print(row)
