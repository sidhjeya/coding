from collections import Counter
from typing import List

def findSubstring(s: str, words: List[str]) -> List[int]:
    """
    Find all starting indices of substrings in s that are a concatenation of all words in words.
    
    Args:
    s (str): The string to search in.
    words (List[str]): List of words to concatenate.
    
    Returns:
    List[int]: List of starting indices of valid concatenated substrings.
    """
    # Check for empty inputs
    if not s or not words:
        return []

    # Initialize key variables
    word_length = len(words[0])  # Length of each word
    word_count = len(words)  # Number of words
    substring_length = word_length * word_count  # Length of the concatenated substring
    word_frequency = Counter(words)  # Frequency of each word in words
    
    result = []  # List to store valid starting indices

    # Iterate through possible starting positions in s
    for i in range(len(s) - substring_length + 1):
        seen = Counter()  # Counter to track words seen in current substring
        valid = True  # Flag to indicate if current substring is valid

        # Check each word-sized chunk in the current substring
        for j in range(word_count):
            start_index = i + j * word_length
            word = s[start_index:start_index + word_length]

            # If the word is not in our word list, this substring is invalid
            if word not in word_frequency:
                valid = False
                break

            seen[word] += 1  # Increment the count of this word

            # If we've seen this word more times than it appears in words, this substring is invalid
            if seen[word] > word_frequency[word]:
                valid = False
                break

        # If we've made it here and valid is still True, we've found a valid substring
        if valid:
            result.append(i)

    return result


# Example usage
s = "barfoofoobarthefoobarthe"
words = ["bar","foo","the"]
print(findSubstring(s, words))  # Output: [0, 9]