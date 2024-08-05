n1= 5
n2=5
n3=5

x_loc=0
y_loc=0

z_loc=0
res=[]
arr1=[2,3,4,5,7]
arr2=[7,3,4,8,5]
arr3=[1,2,3,7,8]
while x_loc!=n1 and y_loc!=n2 and z_loc!=n3:
            x = arr1[x_loc]

            y=arr2[y_loc]
            z = arr3 [z_loc]

            if x==y and y==z:    
                 res.append(x)
                 x_loc+=1
                 y_loc+=1
                 z_loc+=1
            elif x<=y and x<=z:  
                 x_loc+=1

            elif y<=x and y<=z:  
                 y_loc+=1

            else:              
                z_loc+=1
print(res)