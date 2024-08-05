String_1= "t12st123g12"
String_2= "123"
le=len(String_2)
j=0
for i in range (len(String_1)):
    j=0 
    while (String_1[i].isdigit() ):
        if(String_1[i]==String_2[j]):
               j=j+1
               i=i+1  
    if(j==len(String_2)):
        print(i-le)
        break
print("-1")