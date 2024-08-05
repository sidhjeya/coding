def twosum(num,target,start,end,result):
    if (start == end):
        return  result
    if(num[start]+num[end] ==target):
        result.append([start,end])
        return result
    elif(num[start]+num[end] > target):
       return twosum(num,target,start,end-1,result)
    else:
       return twosum(num,target,start+1,end,result)

num=[1,2,3,4,5,6,7,9]
start = 0
end =len(num)-1
result = []
print(twosum(num,11,start,end,result))