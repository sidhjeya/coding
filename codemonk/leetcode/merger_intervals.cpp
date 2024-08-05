#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<pair<int, int>> merge(vector<pair<int, int>>& intervals) {
        if (intervals.empty()) return {};

        // Sort the intervals based on the starting value
        sort(intervals.begin(), intervals.end());

        // Result vector to store merged intervals
        vector<pair<int, int>> merged;

        // Initialize the first interval
        merged.push_back(intervals[0]);

        for (const auto& interval : intervals) {
            // Get the last interval in the merged vector
            auto& last = merged.back();

            // Check if the current interval overlaps with the last merged interval
            if (interval.first <= last.second) {
                // Merge the intervals by updating the end time
                last.second = max(last.second, interval.second);
            } else {
                // No overlap, so add the current interval to the merged result
                merged.push_back(interval);
            }
        }

        return merged;
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<pair<int, int>> intervals1 = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<pair<int, int>> result1 = sol.merge(intervals1);
    cout << "Merged intervals: ";
    for (const auto& interval : result1) {
        cout << "[" << interval.first << "," << interval.second << "] ";
    }
    cout << endl;

    // Example 2
    vector<pair<int, int>> intervals2 = {{1, 4}, {4, 5}};
    vector<pair<int, int>> result2 = sol.merge(intervals2);
    cout << "Merged intervals: ";
    for (const auto& interval : result2) {
        cout << "[" << interval.first << "," << interval.second << "] ";
    }
    cout << endl;

    return 0;
}
