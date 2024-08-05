from typing import List
class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        n = len(matrix)
        
        for layer in range(n//2):
            cols = (n-layer)
            for i in range(layer, cols-1):
                alt_i = n - 1 - i
                val = matrix[layer][i]
                matrix[i][n-1-layer], val = val, matrix[i][n-1-layer]
                matrix[n-1-layer][alt_i], val = val, matrix[n-1-layer][alt_i]
                matrix[alt_i][layer], val = val, matrix[alt_i][layer]
                matrix[layer][i] = val
        print(matrix)
if __name__ == "__main__":
    board = [["1","2","3","4"],    
             ["5","6","7","8"] , 
             ["9","10","11","12"],
            ["13","14","15","16"] ]


    sol=Solution()
    sol.rotate(board)