#include<vector>
#include<iostream>
#include<map>
using namespace std;
#include <algorithm> 
class Solution {
public:
    int i=0,chop,j=0;
    void rotate(vector<int>& nums, int k) {
        while (i<k)
        {
                   
            nums.insert(nums.begin(), nums[nums.size()-1]);
            nums.pop_back();
             i+=1;
        }

        while (j<nums.size())
        {
            cout<<nums[j];
            cout<<",";
             j+=1;
        }
        
    }
};

int main()
{
vector <int> vec1={1,2,3,4,5,6,7};
int val=3;
Solution sol;
sol.rotate(vec1,val);

}