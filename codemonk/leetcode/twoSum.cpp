#include<vector>
#include<iostream>
#include<map>
#include<set>
using namespace std;
#include <random>
#include <algorithm> 
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int f=0,l= numbers.size()-1;
        vector <int> vec2;

        for(int i = 0;i<numbers.size();i++)
        {
            if(numbers[f]+numbers[l]==target)
            {
                vec2.push_back(f+1);
                vec2.push_back(l+1);
                return vec2;
            }
            if(numbers[f]+numbers[l] > target)
            {
                l=l-1;

            }
            else
            {
                f=f+1;
            }

        }
    
    return vec2;
        
    }
};
int main ()
{
    vector <int> vec={2,7,11,15};
    Solution sol;
    sol.twoSum(vec,13);

}