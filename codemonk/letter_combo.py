def all_combos(str):
    # Write your code here
    
    num_to_char = {'2':"abc", '3':"def", '4':"ghi", '5':"jkl", '6':"mno", '7':"pqrs", '8':"tuv", '9':"wxyz"}
    res = [""]
    
    for i in range(len(str)):
        while len(res[0]) == i:
            temp = res[0]
            res.pop(0)
            letters = num_to_char.get(str[i])
            for j in range(len(letters)):
                res.append(temp + letters[j])
                
    return res
def main():
    print(all_combos("9781"))
if __name__ == '__main__':
    main()
