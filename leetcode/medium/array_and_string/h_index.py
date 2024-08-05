# Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper, return the researcher's h-index.

# According to the definition of h-index on Wikipedia: The h-index is defined as the maximum value of h such that the given researcher has published at least h papers that have each been cited at least h times.

def hIndex(citations):
    n = len(citations)
    count = [0] * (n + 1)
    
    # Count the number of papers for each citation count
    for c in citations:
        if c >= n:
            count[n] += 1
        else:
            count[c] += 1
    
    total = 0
    # Iterate from the highest citation count
    for i in range(n, -1, -1):
        total += count[i]
        if total >= i:
            return i
    
    return 0
print(hIndex([3,4,5,6,2]))