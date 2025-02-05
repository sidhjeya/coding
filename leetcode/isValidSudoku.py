def is_valid_sudoku(board):
    def is_valid_block(block):
        block = [x for x in block if x != '.']
        return len(block) == len(set(block))

    for i in range(9):
        row = [board[i][j] for j in range(9)]
        if not is_valid_block(row):
            return False

        col = [board[j][i] for j in range(9)]
        if not is_valid_block(col):
            return False

    for i in range(0, 9, 3):
        for j in range(0, 9, 3):
            block = [board[x][y] for x in range(i, i + 3) for y in range(j, j + 3)]
            if not is_valid_block(block):
                return False

    return True

board = [
    ["5","3",".",".","7",".",".",".","."],
    ["6",".",".","1","9","5",".",".","."],
    [".","9","8",".",".",".",".","6","."],
    ["8",".",".",".","6",".",".",".","3"],
    ["4",".",".","8",".","3",".",".","1"],
    ["7",".",".",".","2",".",".",".","6"],
    [".","6",".",".",".",".","2","8","."],
    [".",".",".","4","1","9",".",".","5"],
    [".",".",".",".","8",".",".","7","9"]
]

print(is_valid_sudoku(board))  # Output should be True for this board
