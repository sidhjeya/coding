#include<vector>
#include<iostream>
#include<map>
#include<set>
using namespace std;
#include <random>
#include <algorithm> 

class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        std::vector<int>::iterator it = nums.begin();
        int c = 0;
        while (it != nums.end())
        {
            c = std::count(it, nums.end(), *it);
            if (c > 2)
                nums.erase(it);
            else
                ++it;
        }
        return nums.size();
    }
};
int main()
{
    Solution sol;
    vector <int> vec1={1,1,1,2,2,3};
    sol.removeDuplicates(vec1);
}