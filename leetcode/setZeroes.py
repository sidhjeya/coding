import numpy as np
class Solution :

    def setZero(self,board):
       
        ls=[]
        m=len(board)
        n=len(board[0])
        for i in range(len(board)):
            for j in range (len(board[0])):
               if(board[i][j]=="0") :
                    ls.append([i,j])
        print(ls)
        for arr in ls:
            row=arr[0]
            col=arr[1]
            for j in range(len(board[0])):
                board[row][j]="0"
        for ar1 in ls :
            row=ar1[0]
            col=ar1[1]
            for k in range(len(board)):
                board[k][col]="0"
        print(board)
            
if __name__ == "__main__":
    # board = [["9","3","3","0"],    
    #          ["5","6","0","8"] , 
    #          ["9","10 ","11","12"],
    #         ["13","14","15","16"]]
    board = [["9","3","3"],    
                 ["5","0","3"] , 
                ["9","10 ","11"]]


    sol=Solution()
    sol.setZero(board)