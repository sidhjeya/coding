# Given an input string s, reverse the order of the words.

# A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

# Return a string of the words in reverse order concatenated by a single space.

# Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.
def reverseWords(s):
    # Split the string into words and remove extra spaces
    words = s.split()
    
    # Reverse the list of words
    words.reverse()
    
    # Join the words back together with a single space
    return ' '.join(words)
print(reverseWords("the sky is blue"))