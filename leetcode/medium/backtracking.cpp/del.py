a=['a','b','c','d']
ans=[]
cnt=0
stri = a[0]

def Back(stri, sta,cnt):
    if sta == len(a):
        cnt = cnt + 1
        sta=len(a)+1
        return

    if len(stri) == 2:
        ans.append([stri])
        return
    s=a[cnt] + a[sta]
    Back(s, sta,cnt)
    stri=stri[:len(stri)]
    Back(stri, sta + 1,cnt)


cnt = 0
Back(stri, 1,cnt)
print(ans)