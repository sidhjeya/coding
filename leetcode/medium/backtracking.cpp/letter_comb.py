keypad = {
        '1': [' ', '(', ')'],
        '2': ['a', 'b', 'c'],
        '3': ['d', 'e', 'f'],
        '4': ['g', 'h', 'i'],
        '5': ['j', 'k', 'l'],
        '6': ['m', 'n', 'o'],
        '7': ['p', 'q', 'r', 's'],
        '8': ['t', 'u', 'v'],
        '9': ['w', 'x', 'y', 'z'],
        '*': ['+', '*'],
        '0': [' '], 
        '#': ['#', '⇧'] 
    }
def keyselc(ls1,a):

    for i in ls1:
        a.append(keypad[i])
    len1=len(a)
    
    if (i==len1 ):
        return
    keyselc()
    
 

if __name__ =="__main__":
    ls=["2","3"]
    a=""
    keyselc(ls)