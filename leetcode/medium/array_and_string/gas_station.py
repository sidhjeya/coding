# There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].
# You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.
# Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique
def canCompleteCircuit(gas, cost):
    n = len(gas)
    total_surplus = 0
    current_surplus = 0
    start_station = 0
    
    for i in range(n):
        total_surplus += gas[i] - cost[i]
        current_surplus += gas[i] - cost[i]
        
        if current_surplus < 0:
            start_station = i + 1
            current_surplus = 0
    
    return start_station if total_surplus >= 0 else -1

print(canCompleteCircuit([1,2,3,4,5],[3,4,5,1,2]))