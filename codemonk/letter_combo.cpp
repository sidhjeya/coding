#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<char, string> num_to_char = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};

vector<string> all_combos(const string& str) {
    vector<string> res = {""};

    for (char digit : str) {
        vector<string> temp;
        for (const string& prev_combo : res) {
            // Combine existing combinations with letters
            for (char letter : num_to_char[digit]) {
                temp.push_back(prev_combo + letter);
            }
        }
        res = temp; // Replace existing combinations with new ones
    }

    return res;
}

int main() {
    string phone_number = "23";
    vector<string> combinations = all_combos(phone_number);

    cout << "All letter combinations for " << phone_number << ":" << endl;
    for (const string& combo : combinations) {
        cout << combo << endl;
    }

    return 0;
}
