def reverse_word(s):
    def get_first_and_rest(s):
        s=s.strip()
        if s == "":
            return ""
        words=s.split(maxsplit=1)
        if(len(words))>1:
            return words[0],words[1]
        else :
            return words[0]," "
    if not s.strip():
        return ""
    first,rest = get_first_and_rest(s)

    if rest:
        return reverse_word(rest)+" "+ first
    else:
        return first

if __name__ =="__main__":
    str = "i am good"
    a=reverse_word(str)
    print(a)