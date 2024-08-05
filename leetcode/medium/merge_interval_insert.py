def merge_intervals(intervals,newInterval):
    if not intervals:
        return []
    m=[]
    n=0
    # Sort the intervals by their start value
    intervals.sort(key=lambda x: x[0])
    #taking the zeroth index of interval list
    prev_inteval = newInterval
    #itertatin over all the list except the zeroth list
    for interval in intervals:
        # If the current interval overlaps with the last merged interval, merge them
        if (( prev_inteval[0] <= interval[1]) and (prev_inteval[1]>=interval[0])):
            mx=max(prev_inteval[1],interval[1])
            mi=min(prev_inteval[0],interval[0])
            if(n==1):
                m.pop()
            m.append([mi,mx])
            prev_inteval = m[-1]
            n=1
        else :
            m.append(interval)
            n=0
        
        

    return m

# Example usage:
intervals1 = [[1, 2], [3, 4], [5, 6], [7, 8]]
newInterval = [2,5]

print(merge_intervals(intervals1,newInterval)) 

