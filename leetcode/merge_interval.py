def merge_intervals(intervals):
    if not intervals:
        return []

    # Sort the intervals by their start value
    intervals.sort(key=lambda x: x[0])
    #takkiong th
    cnt=0
    merged = [intervals[0]]
    
    for current in intervals[1:]:
        last_merged = merged[-1]
        
        # If the current interval overlaps with the last merged interval, merge them
        if current[0] <= last_merged[1]:
            last_merged[1] = max(last_merged[1], current[1])
            cnt=cnt+1
        else:
            # Otherwise, add the current interval to the list of merged intervals
            merged.append(current)
            
    
    return cnt

# Example usage:
intervals1 = [[10, 26], [2, 8], [1, 6], [7, 12]]

print(merge_intervals(intervals1))  # Output: [[1, 6], [8, 10], [15, 18]]

