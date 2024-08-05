#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int countFavouriteSingers(int n, vector<int>& singers) {
    unordered_map<int, int> singerCount;

    // Count occurrences of each singer
    for (int singer : singers) {
        singerCount[singer]++;
    }

    // Determine the maximum number of songs any singer has
    int maxCount = 0;
    for (const auto& pair : singerCount) {
        maxCount = max(maxCount, pair.second);
    }

    // Count how many singers have the maximum number of songs
    int favouriteSingerCount = 0;
    for (const auto& pair : singerCount) {
        if (pair.second == maxCount) {
            favouriteSingerCount++;
        }
    }

    return favouriteSingerCount;
}

int main() {
    int n;
    // cout << "Enter number of songs: ";
    cin >> n;

    vector<int> singers(n);
    // cout << "Enter the singers of each song: ";
    for (int i = 0; i < n; ++i) {
        cin >> singers[i];
    }

    int result = countFavouriteSingers(n, singers);
    cout << "Number of favourite singers: " << result << endl;

    return 0;
}
