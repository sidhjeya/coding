def reverse_words(s):
    def get_first_word_and_rest(s):
        s = s.strip()
        # if not s:
        #     return '', ''
        words = s.split(maxsplit=1)
        if len(words) > 1:
            return words[0], words[1]
        else:
            return words[0], ''

    # if not s.strip():
    #     return ''

    first_word, rest = get_first_word_and_rest(s)
    if rest:
        return reverse_words(rest) + ' ' + first_word
    else:
        return first_word

if __name__ == "__main__":
    input1 = "one two three"
    # input2 = "I love india"

    output1 = reverse_words(input1)
    # output2 = reverse_words(input2)

    print(f"Input: {input1}\nOutput: {output1}")
    # print(f"Input: {input2}\nOutput: {output2}")
