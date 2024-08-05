def jump(start,num,prev):
    if(start==len(num)-1):
        return True
    if(num[start]==0):
        return False
    prev=num[start]+prev
    return jump(prev,num,prev)    
num=[0,2,1,1,4]
start=0
prev=0
print(jump(start,num,prev))

# def jump(start, num, prev):
#     if start >= len(num) - 1:
#         return True
    
#     prev = num[start] + prev
    
#     return jump(prev, num, prev)

# num = [2, 3, 1, 1, 4]
# start = 0
# prev = 0
# print(jump(start, num, prev))
