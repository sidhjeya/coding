print("enter the value of n")
n=int(input())
print("enter the array")
arr=[]
sst=" "
for i in range(2*n):
    arr.append(input())
for j in range (n):
    sst=str(arr[j])+str(arr[j+n])+sst
print(sst[:-1])