array_1= [2,4,5,6,7,9,10,13]
array_2= [2,3,4,5,6,7,8,9,11,15]
m_ar=[]
cnt=0
element_count = {}
arr=array_1+array_2
for i in (arr):
    if i in element_count:
        element_count[i] += 1  
    else:
        element_count[i] = 1 
for key,value in element_count.items():
    m_ar.append(key)

print(m_ar)