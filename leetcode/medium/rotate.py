from typing import List
class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        dict={}
        
        m, n = len(matrix), len(matrix[0])
        j=0
        i=0
        for i in range(m) :
            for j in range(n):
                                           
                    b= matrix[n-1-j][i]
                    dict[(i,j)]=b
        for i in range(m) :
            for j in range(n):
              
                matrix[i][j]=dict[(i,j)]


                  
             
if __name__ == "__main__":
    board = [["1","2","3"],    ["4","5","6"] , ["7","8","9"] ]


    sol=Solution()
    sol.rotate(board)