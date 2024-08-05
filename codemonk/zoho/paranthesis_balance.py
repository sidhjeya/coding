def remove_unbalanced_parentheses(expr):
    stack = []
    to_remove = set()
    
    # First pass: Identify positions of unmatched parentheses
    for i, char in enumerate(expr):
        if char == '(':
            stack.append(i)
        elif char == ')':
            if stack:
                stack.pop()
            else:
                to_remove.add(i)
    
    # Add remaining unmatched opening parentheses to the set
    to_remove.update(stack)
    
    # Second pass: Build the result without the characters at the indexes in the set
    result = []
    for i, char in enumerate(expr):
        if i not in to_remove:
            result.append(char)
    
    return ''.join(result)

# Example usage:
input1 = "((abc)((de))"
output1 = remove_unbalanced_parentheses(input1)
print(f"Input: {input1}\nOutput: {output1}")
