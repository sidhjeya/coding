def gameOfLife(board):
    m, n = len(board), len(board[0])
    
    # Helper function to count live neighbors
    def count_live_neighbors(r, c):
        directions = [
            (-1, -1), (-1, 0), (-1, 1), 
            (0, -1),          (0, 1), 
            (1, -1), (1, 0), (1, 1)
        ]
        live_neighbors = 0
        for dr, dc in directions:
            nr, nc = r + dr, c + dc
            if 0 <= nr < m and 0 <= nc < n and abs(board[nr][nc]) == 1:
                live_neighbors += 1
        return live_neighbors
    
    # First pass: mark the changes
    for i in range(m):
        for j in range(n):
            live_neighbors = count_live_neighbors(i, j)
            if board[i][j] == 1:
                if live_neighbors < 2 or live_neighbors > 3:
                    board[i][j] = -1  # Live to dead
            else:
                if live_neighbors == 3:
                    board[i][j] = 2  # Dead to live
    
    # Second pass: update the board
    for i in range(m):
        for j in range(n):
            if board[i][j] == -1:
                board[i][j] = 0  # Marked live to dead, now set it to dead
            elif board[i][j] == 2:
                board[i][j] = 1  # Marked dead to live, now set it to live

# Example usage:
board = [
    [0, 1, 0],
    [0, 0, 1],
    [1, 1, 1],
    [0, 0, 0]
]

gameOfLife(board)

for row in board:
    print(row)
