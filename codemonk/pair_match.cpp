#include <iostream>
#include <unordered_map>
#include <vector>

int two_sum(int n, const std::vector<int>& arr, int target) {
    int result = 0;
    std::unordered_map<int, int> umap;

    for (int i = 0; i < n; ++i) {
        if (arr[i] >= target)
            continue;

        // Check if arr[i] is already in the unordered_map
        if (umap.find(arr[i]) != umap.end()) {
            result += umap[arr[i]];
        }

        // Check if the complement (target - arr[i]) is already in the unordered_map
        if (umap.find(target - arr[i]) != umap.end()) {
            umap[target - arr[i]] += 1;
        } else {
            umap[target - arr[i]] = 1;
        }
    }

    return result;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 2, 9,10}; // Example array
    int target = 4; // Example target
    int result = two_sum(arr.size(), arr, target);
    std::cout << "Number of pairs: " << result << std::endl; // Output the result
    return 0;
}
