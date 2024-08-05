sttri=[13,2,4,15,12,10,5,8]
asc=[]
dsc=[]
ou=""
for i in range(len(sttri)):
    if(i%2==0):
        dsc.append(sttri[i])
    else:
        asc.append(sttri[i])

dsc.sort(reverse=True)
asc.sort()
if(len(dsc)>len(asc)):
    temp=dsc
elif(len(dsc)>len(asc)):
    temp=asc
else:
    temp=asc
i=0
for i in range (len(temp)):
    if(i==len(temp)-1):
        ou=ou+','+str(dsc[i])
    else:
        ou=ou+','+str(dsc[i])+','+str(asc[i])
print(ou)
