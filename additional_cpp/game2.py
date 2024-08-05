import pygame
import math

# Initialize Pygame
pygame.init()

# Set up the display
WIDTH = 512
HEIGHT = 512
DIMENSION = 8
SQ_SIZE = HEIGHT // DIMENSION
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Chess")

# Colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
GRAY = (128, 128, 128)
LIGHT_BLUE = (173, 216, 230)
DARK_BLUE = (0, 0, 139)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
YELLOW = (255, 255, 0)

# Chess board representation
board = [
    ['bR', 'bN', 'bB', 'bQ', 'bK', 'bB', 'bN', 'bR'],
    ['bP', 'bP', 'bP', 'bP', 'bP', 'bP', 'bP', 'bP'],
    ['--', '--', '--', '--', '--', '--', '--', '--'],
    ['--', '--', '--', '--', '--', '--', '--', '--'],
    ['--', '--', '--', '--', '--', '--', '--', '--'],
    ['--', '--', '--', '--', '--', '--', '--', '--'],
    ['wP', 'wP', 'wP', 'wP', 'wP', 'wP', 'wP', 'wP'],
    ['wR', 'wN', 'wB', 'wQ', 'wK', 'wB', 'wN', 'wR']
]

def draw_board():
    for row in range(DIMENSION):
        for col in range(DIMENSION):
            color = WHITE if (row + col) % 2 == 0 else GRAY
            pygame.draw.rect(screen, color, pygame.Rect(col*SQ_SIZE, row*SQ_SIZE, SQ_SIZE, SQ_SIZE))

def draw_piece(piece, row, col):
    color = LIGHT_BLUE if piece[0] == 'w' else DARK_BLUE
    center_x = col * SQ_SIZE + SQ_SIZE // 2
    center_y = row * SQ_SIZE + SQ_SIZE // 2
    radius = SQ_SIZE // 3

    if piece[1] == 'P':  # Pawn: Triangle
        points = [
            (center_x, center_y - radius),
            (center_x - radius, center_y + radius),
            (center_x + radius, center_y + radius)
        ]
        pygame.draw.polygon(screen, color, points)
    elif piece[1] == 'R':  # Rook: Rectangle
        pygame.draw.rect(screen, color, (center_x - radius, center_y - radius, radius * 2, radius * 2))
    elif piece[1] == 'N':  # Knight: Pentagon
        points = [
            (center_x, center_y - radius),
            (center_x + radius * math.cos(math.pi/5), center_y - radius * math.sin(math.pi/5)),
            (center_x + radius * math.cos(math.pi/10), center_y + radius * math.sin(math.pi/10)),
            (center_x - radius * math.cos(math.pi/10), center_y + radius * math.sin(math.pi/10)),
            (center_x - radius * math.cos(math.pi/5), center_y - radius * math.sin(math.pi/5))
        ]
        pygame.draw.polygon(screen, color, points)
    elif piece[1] == 'B':  # Bishop: Diamond
        points = [
            (center_x, center_y - radius),
            (center_x + radius, center_y),
            (center_x, center_y + radius),
            (center_x - radius, center_y)
        ]
        pygame.draw.polygon(screen, color, points)
    elif piece[1] == 'Q':  # Queen: Circle
        pygame.draw.circle(screen, color, (center_x, center_y), radius)
    elif piece[1] == 'K':  # King: Cross
        pygame.draw.rect(screen, color, (center_x - radius//2, center_y - radius, radius, radius * 2))
        pygame.draw.rect(screen, color, (center_x - radius, center_y - radius//2, radius * 2, radius))

def draw_pieces():
    for row in range(DIMENSION):
        for col in range(DIMENSION):
            piece = board[row][col]
            if piece != '--':
                draw_piece(piece, row, col)

def get_square_under_mouse(pos):
    x, y = pos
    row = y // SQ_SIZE
    col = x // SQ_SIZE
    return row, col

def is_valid_move(start, end, piece):
    start_row, start_col = start
    end_row, end_col = end
    
    if piece[1] == 'P':  # Pawn
        if piece[0] == 'w':
            return (end_col == start_col and end_row == start_row - 1 and board[end_row][end_col] == '--') or \
                   (start_row == 6 and end_row == 4 and end_col == start_col and board[5][end_col] == '--' and board[4][end_col] == '--') or \
                   (end_row == start_row - 1 and abs(end_col - start_col) == 1 and board[end_row][end_col][0] == 'b')
        else:
            return (end_col == start_col and end_row == start_row + 1 and board[end_row][end_col] == '--') or \
                   (start_row == 1 and end_row == 3 and end_col == start_col and board[2][end_col] == '--' and board[3][end_col] == '--') or \
                   (end_row == start_row + 1 and abs(end_col - start_col) == 1 and board[end_row][end_col][0] == 'w')
    elif piece[1] == 'R':  # Rook
        if start_row == end_row:
            step = 1 if end_col > start_col else -1
            for col in range(start_col + step, end_col, step):
                if board[start_row][col] != '--':
                    return False
        elif start_col == end_col:
            step = 1 if end_row > start_row else -1
            for row in range(start_row + step, end_row, step):
                if board[row][start_col] != '--':
                    return False
        else:
            return False
        return True
    elif piece[1] == 'N':  # Knight
        return (abs(start_row - end_row) == 2 and abs(start_col - end_col) == 1) or \
               (abs(start_row - end_row) == 1 and abs(start_col - end_col) == 2)
    elif piece[1] == 'B':  # Bishop
        if abs(start_row - end_row) != abs(start_col - end_col):
            return False
        step_row = 1 if end_row > start_row else -1
        step_col = 1 if end_col > start_col else -1
        for i in range(1, abs(start_row - end_row)):
            if board[start_row + i*step_row][start_col + i*step_col] != '--':
                return False
        return True
    elif piece[1] == 'Q':  # Queen
        if start_row == end_row or start_col == end_col:
            return is_valid_move(start, end, piece[0] + 'R')
        else:
            return is_valid_move(start, end, piece[0] + 'B')
    elif piece[1] == 'K':  # King
        return abs(start_row - end_row) <= 1 and abs(start_col - end_col) <= 1
    
    return False

def get_valid_moves(piece, row, col):
    valid_moves = []
    for i in range(DIMENSION):
        for j in range(DIMENSION):
            if is_valid_move((row, col), (i, j), piece):
                if board[i][j] == '--' or board[i][j][0] != piece[0]:  # Empty square or opponent's piece
                    valid_moves.append((i, j))
    return valid_moves

selected_piece = None
valid_moves = []
turn = 'w'

font = pygame.font.Font(None, 36)

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.MOUSEBUTTONDOWN:
            pos = pygame.mouse.get_pos()
            row, col = get_square_under_mouse(pos)
            piece = board[row][col]
            if piece != '--' and piece[0] == turn:
                selected_piece = (row, col)
                valid_moves = get_valid_moves(piece, row, col)
            elif selected_piece:
                start_row, start_col = selected_piece
                if (row, col) in valid_moves:
                    board[row][col] = board[start_row][start_col]
                    board[start_row][start_col] = '--'
                    turn = 'b' if turn == 'w' else 'w'
                selected_piece = None
                valid_moves = []

    screen.fill(WHITE)
    draw_board()
    draw_pieces()
    
    if selected_piece:
        row, col = selected_piece
        pygame.draw.rect(screen, GREEN, pygame.Rect(col*SQ_SIZE, row*SQ_SIZE, SQ_SIZE, SQ_SIZE), 4)
        for move in valid_moves:
            move_row, move_col = move
            pygame.draw.circle(screen, YELLOW, (move_col*SQ_SIZE + SQ_SIZE//2, move_row*SQ_SIZE + SQ_SIZE//2), SQ_SIZE//4)

    turn_text = font.render(f"{'White' if turn == 'w' else 'Black'}'s turn", True, BLACK)
    screen.blit(turn_text, (10, HEIGHT - 40))

    pygame.display.flip()

pygame.quit()