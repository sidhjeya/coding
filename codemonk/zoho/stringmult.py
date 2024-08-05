
stri="a0b13c10"
lc=[]
ls=[]
b=1
nx=0
start=0
cnt=0
app=""
for i  in range (len(stri)):
    if stri[i].isdigit() and b==1 :
        start= i
        b=0
    elif (stri[i].isalpha() or i==len(stri)-1) and start !=0:
        if(i==len(stri)-1):
            end =i+1
        else:
            end=i
        lc.append((start,end))
        b=1
for j in range (len(stri)):
    if(stri[j].isalpha()):
        while(cnt < int(stri[lc[nx][0]:lc[nx][1]])):
            app =app + stri[j]
            cnt=cnt+1
        nx=nx+1
        cnt=0
print(lc)
print(app)
