def findMinArrowShots(points):
    if not points:
        return 0
    
    # Sort balloons by end point
    points.sort(key=lambda x: x[1])
    
    arrows = 1
    current_end = points[0][1]
    
    for start, end in points[1:]:
        if start > current_end:
            arrows += 1
            current_end = end
    
    return arrows
if __name__ == "__main__":
    print(findMinArrowShots([[1,3],[2,1],[3,4],[2,4]]))