def print_solution(board):
    for row in board:
        print(" ".join("Q" if col == 1 else "." for col in row))
    print()

def is_safe(board, row, col):
    # Check the column for any existing queen
    for i in range(row):
        if board[i][col] == 1:
            return False
    # Check the diagonal (upper left)
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False
    # Check the diagonal (upper right)
    for i, j in zip(range(row, -1, -1), range(col, len(board))):
        if board[i][j] == 1:
            return False
    return True

def solve_n_queens(board, row):
    if row == len(board):  # Base case: all rows are processed
        print_solution(board)  # or store the solution
        return
    # Try placing a queen in each column and recursively solve for the next row
    for col in range(len(board)):
        if is_safe(board, row, col):
            board[row][col] = 1
            solve_n_queens(board, row + 1)
            board[row][col] = 0  # backtrack

def n_queens(n):
    board = [[0] * n for _ in range(n)]
    solve_n_queens(board, 0)

# Example usage:
n_queens(4)
