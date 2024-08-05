print("enter the number of iteration")
num_it = int(input())
num_lst_rem = []
pop_ot_lst=[]
n=6
for i in range(6):
    print("enter ")
    num_lst_rem.append(int(input()))
use_num_lst=num_lst_rem
for j in range(num_it):
    de_que= use_num_lst[:num_it]
    lft_que=use_num_lst[num_it:]
    max_num=max(de_que)
    de_que.remove(max_num)
    for x in range(len(de_que)):
        if de_que[x]!=0:
            de_que[x]=de_que[x]-1
    use_num_lst= lft_que + de_que 
    pop_out_num= num_lst_rem.index(max_num)
    #list of all the poped out elements
    pop_ot_lst.append(pop_out_num)