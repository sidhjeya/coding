from typing import List
num=[1,2,1,3,4]
mu=0
la=[]
multi=1
st=0
while (st < len(nums)):
    if (st!=mu and mu<len(nums)):
        multi=nums[mu]*multi
        mu+=1
    elif mu>=len(nums)-1:       
        la.append(multi)
        st+=1
        mu=0
        multi=1
    else:
        mu+=1
        continue
print(la)

    