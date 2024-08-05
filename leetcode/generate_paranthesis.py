def generate_parenthesis(n):
    result = []

    def backtrack(current, open, close):
        if len(current) == 2*n:
            result.append(current)
            return
        if open < n:
            backtrack(current + '(', open + 1, close)
            print("***")
        print("i was here")
        if close < open:
            print("front")
            backtrack(current + ')', open, close + 1)
            print("back")
    backtrack('', 0, 0)
    return result

# Example usage
n1 = 3
print(generate_parenthesis(n1))  # Output: ["((()))","(()())","(())()","()(())","()()()"]


