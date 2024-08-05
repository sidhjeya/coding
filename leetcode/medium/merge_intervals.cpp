#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Sort intervals by the starting value
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        
        for (const auto& interval : intervals) {
            // If merged is empty or there is no overlap, just add the interval
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            } else {
                // There is an overlap, merge the current interval with the last one
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        return merged;
    }
};

int main() {
    vector<vector<int>> vec = {{1, 3}, {2, 6}, {4, 10}, {15, 18}};
    Solution sol;
    vector<vector<int>> result = sol.merge(vec);

    // Print the merged intervals
    for (const auto& interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
