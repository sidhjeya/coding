se='geeksforgeeks'
ls=[]
for i in (se):
    ls.append(i)

lst=len(ls)-1
frst=0
sti=""
stii=""
b=0
def gap_mid(rot): 
    i=0
    st=''
    while (i<rot):
        st=st+' '
        i=i+1
    return st
def gap_side(rot_side):
    j=0
    stty=''
    while(j<rot_side):
        stty=stty+' '
        j=j+1
    return stty
for i in range (len(ls)):
    rot = abs(lst-frst)
    rot_side=abs(frst)
    sti=gap_mid(rot)
    stii=gap_side(rot_side)
    if(ls[lst]==ls[frst] and rot==0):
        print(stii+""+ls[frst])
    else:
        print(stii+ls[frst]+sti+ls[lst])
        print(" ")
    if(rot==0 or b==1):
        lst=lst+1
        frst=frst-1
        b=1
    elif(b!=1):
        lst=lst-1
        frst=frst+1
 
