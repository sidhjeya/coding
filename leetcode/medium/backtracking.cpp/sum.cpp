#include <vector>
#include <iostream>
using namespace std;

void helper(vector<int>& candidates, int target, int i, int curSum, vector<int>& temp, vector<vector<int>>& ans) {
       // Base Case
    if (curSum == target) {
        ans.push_back(temp);
        return;
    }
    // Bounding Condition
    if (curSum > target) {
        return;
    }



    if (i == candidates.size()) {
        return;
    }

    // Inclusion
    temp.push_back(candidates[i]);
    helper(candidates, target, i, curSum + candidates[i], temp, ans);
    temp.pop_back();

    // Exclusion
    helper(candidates, target, i + 1, curSum, temp, ans);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> temp;
    helper(candidates, target, 0, 0, temp, ans);
    return ans;
}

int main() {
    vector<int> vec = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> ans = combinationSum(vec, target);

    for (const auto& combination : ans) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
