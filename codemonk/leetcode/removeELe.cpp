#include<vector>
#include<iostream>
#include<map>
#include<set>
using namespace std;
#include <random>
#include <algorithm> 
class Solution {
public:
    vector <int> vec2;
    int removeElement(vector<int>& nums, int val) {  

        
        vec2=nums;
        nums.erase(nums.begin(),nums.end());
        for (int i=0;i<vec2.size();i++)
        {
            if(vec2[i]!=val )
                nums.push_back(vec2[i]);
        }   
        for (int i=0;i<nums.size();i++)
        {
             cout<<nums[i]<<endl;
            
        } 
    }
};

int main(){
    Solution sol;
    vector <int> vec1={3,2,2,3};
    sol.removeElement(vec1,3);
}
