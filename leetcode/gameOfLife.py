class Solution :

    def gameOfLife(self,board):
        def check(self,board,lst):
            num=0
            m=len(board)
            n=len(board[0])
            for ls in lst:
                up_r = ls[0]-1
                up_c = ls[1]
                dw_r = ls[0]+1
                dw_c = ls[1]
                rt_r= ls[0]
                rt_c=ls[1]+1
                lt_r=ls[0]
                lt_c=ls[1]-1
                dia_lt_c=ls[0]-1
                dia_lt_r=ls[1]-1
                dia_rt_c=ls[0]+1
                dia_rt_r=ls[1]-1
                dia_dwl_c=ls[0]-1
                dia_dwl_r=ls[1]+1
                dia_dwr_c=ls[0]+1
                dia_dwr_r=ls[1]+1
              
                if((up_r <= m-1 and up_c <=n-1 ) and board[up_r][up_c] == "1" ):
                        num=num+1
                if((dw_r <=m-1 and dw_c <=n-1 ) and board[dw_r][dw_c] == "1" ):
                        num=num+1
                if((rt_r <= m-1 and rt_c <=n-1 ) and board[rt_r][rt_c] == "1"):    
                        num=num+1
                if( (lt_r <= m-1 and lt_c <=n-1 ) and board[lt_r][lt_c] == "1" ):    
                        num=num+1
                if((dia_lt_r <=m-1 and dia_lt_c <=n-1 ) and board[dia_lt_r][dia_lt_c] == "1" ):    
                        num=num+1
                if((dia_rt_r <= m-1 and dia_rt_c <=n-1 ) and board[dia_rt_r][dia_rt_c] == "1" ):    
                        num=num+1
                if((dia_dwl_r <= m-1 and dia_dwl_c <=n-1) and board[dia_dwl_r][dia_dwl_c] == "1"):    
                        num=num+1
                if((dia_dwr_r <= m-1 and dia_dwr_c <=n-1 ) and board[dia_dwr_r][dia_dwr_c] == "1"  ):    
                        num=num+1
            
                if(num>=2 and num <=3):
                    board[ls[0]][ls[1]]=1
                elif(num<2):
                    board[ls[0]][ls[1]]=0
                elif(num>3):
                    board[ls[0]][ls[1]]=0
                num=0
        ls=[]
        m=len(board)
        n=len(board[0])
        for i in range(len(board)):
            for j in range (len(board[0])):
               if(board[i][j]=="1") :
                    ls.append([i,j])
        check(self,board,ls)
        print(board)
        

if __name__ == "__main__":
    board = [["0","1","0"],    
             ["0","0","1"] , 
             ["1","1","1"],
             ["0","0","0"]] 
 

    sol=Solution()
    sol.gameOfLife(board)