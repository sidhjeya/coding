def is_isomorphic(s: str, t: str) -> bool:
    if len(s) != len(t):
        return False

    mapping_s_to_t = {}
    mapping_t_to_s = {}

    for char_s, char_t in zip(s, t):
        print(char_s in mapping_s_to_t,"and ", "!=",char_t)
        if (char_s in mapping_s_to_t and mapping_s_to_t[char_s] != char_t) or \
           (char_t in mapping_t_to_s and mapping_t_to_s[char_t] != char_s):
            return False
        
        mapping_s_to_t[char_s] = char_t
        mapping_t_to_s[char_t] = char_s

    return True

# Example usage
s = "paper"
t = "title"
print(is_isomorphic(s, t))  # Output: True

s = "foo"
t = "bar"
print(is_isomorphic(s, t))  # Output: False
